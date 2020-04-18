// URL: https://atcoder.jp/contests/arc017/submissions/12037639
// Date: Sat, 18 Apr 2020 07:49:43 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int N, X;
	cin >> N >> X;
	vector<int> w(N), csum(N + 1, 0);
	for(auto& e : w)cin >> e;
	partial_sum(begin(w), end(w), next(begin(csum)));
	map<int, int> m1, m2;
	m1[0] = m2[0] = 1;
	queue<pair<int,int>> q;
	for(int i = 0; i < N / 2; ++i) {
		for(auto& p : m1)
			q.emplace(p);
		while(!q.empty())
			m1[q.front().first+w[i]] += q.front().second, q.pop();
	}
	for(int i = N / 2; i < N; ++i) {
		for(auto& p : m2)
			q.emplace(p);
		while(!q.empty())
			m2[q.front().first+w[i]] += q.front().second, q.pop();
	}
	int ans = 0;
	for(auto& p : m1)
		ans += m2[X - p.first] * p.second;
	cout << ans << endl;
}
