// URL: https://atcoder.jp/contests/tenka1-2015-qualb/submissions/11654842
// Date: Wed, 08 Apr 2020 00:53:15 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	size_t N = S.length();
	vector<size_t> m(N, string::npos);
	stack<size_t> st;
	for (size_t pos = 0; pos != string::npos; pos = S.find_first_of("{}", pos + 1)) {
		if(S[pos]=='{')st.push(pos);
		else {
			size_t l = st.top();
			st.pop();
			m[l] = pos;
			m[pos] = l;
		}
	}
	auto is_num = [](char c){ return '0' <= c && c <= '9'; };
	for (size_t pos = 0; pos < N; ++pos) {
		if(!is_num(S[pos]))continue;
		if(pos == 0 || !is_num(S[pos - 1]))st.push(pos);
		if(pos == N - 1 || !is_num(S[pos + 1])) {
			size_t l = st.top();
			st.pop();
			m[l] = pos;
			m[pos] = l;
		}
	}
	string ans = S == "{}" || S[m[1]+1] == ':' ? "dict" : "set";
	cout << ans << endl;
}
