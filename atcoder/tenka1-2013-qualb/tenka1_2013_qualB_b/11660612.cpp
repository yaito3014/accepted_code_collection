// URL: https://atcoder.jp/contests/tenka1-2013-qualb/submissions/11660612
// Date: Wed, 08 Apr 2020 06:12:18 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int Q, L;
	cin >> Q >> L;
	using P = pair<int, int>;
	stack<P> s;
	int size = 0;
	auto exit_with_str = [](string s){
		cout << s << endl;
		exit(EXIT_SUCCESS);
	};
	for (int i = 0; i < Q; ++i) {
		string query;
		cin >> query;
		if(query == "Push") {
			int N, M;
			cin >> N >> M;
			if (L - size < N)exit_with_str("FULL");
			s.push(P(N, M));
			size += N;
		} else if (query == "Pop") {
			int N;
			cin >> N;
			if (size < N)exit_with_str("EMPTY");
			size -= N;
			while (N > 0) {
				if(s.top().first <= N) {
					N -= s.top().first;
					s.pop();
				} else {
					s.top().first -= N;
					break;
				}
			}
		} else if (query == "Top") {
			if(size == 0)exit_with_str("EMPTY");
			cout << s.top().second << "
";
		} else if (query == "Size") {
			cout << size << "
";
		} else {
			exit(EXIT_FAILURE);
		}
	}
	cout << "SAFE" << endl;
}
