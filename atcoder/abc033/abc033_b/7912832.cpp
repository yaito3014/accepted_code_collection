// URL: https://atcoder.jp/contests/abc033/submissions/7912832
// Date: Tue, 08 Oct 2019 22:46:02 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	int N;
	cin >> N;
	vector<string> S(N);
	vector<int> P(N);
	for(int i=0;i<N;++i)
		cin >> S[i] >> P[i];
	int sum = accumulate(begin(P),end(P),0);
	auto itr = find_if(begin(P),end(P),[&](int p){ return p>sum/2; });
	string ans;
	if(itr!=end(P))
		ans = S[distance(begin(P),itr)];
	else
		ans = "atcoder";
	cout << ans << endl;
}
