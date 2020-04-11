// URL: https://atcoder.jp/contests/abc079/submissions/11755856
// Date: Sat, 11 Apr 2020 13:34:27 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int H, W;
	cin >> H >> W;
	array<array<int, 10>, 10> c;
	for(auto& row : c)for(auto& e : row)cin >> e;
	vector<vector<int>> A(H, vector<int>(W));
	for(auto& row : A)for(auto& e : row)cin >> e;
	using P = pair<int, int>;  // cost, node
	constexpr int INF = INT_MAX;
	vector<int> costs(10, INF);
	costs[1] = 0;
	priority_queue<P, vector<P>, greater<P>> que;
	que.emplace(0, 1);
	while(!que.empty()) {
		int cur, cost;
		tie(cost, cur) = que.top();
		que.pop();
		for(int nxt = 0; nxt < 10; ++nxt) {
			if(cur == nxt)continue;
			if(costs[nxt] <= cost + c[nxt][cur])continue;
			costs[nxt] = cost + c[nxt][cur];
			que.emplace(costs[nxt], nxt);
		}
	}
	int ans = 0;
	for(auto& row : A)for(auto& e : row)
		if(e != -1)ans += costs[e];
	cout << ans << endl;
}
