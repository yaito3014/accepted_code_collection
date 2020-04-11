// URL: https://atcoder.jp/contests/abc148/submissions/11758728
// Date: Sat, 11 Apr 2020 14:48:33 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int N, u, v;
	cin >> N >> u >> v, --u, --v;
	vector<deque<int>> edge_list(N);
	for(int i = 0; i < N - 1; ++i) {
		int A, B;
		cin >> A >> B, --A, --B;
		edge_list[A].push_back(B);
		edge_list[B].push_back(A);
	}
	constexpr int INF = INT_MAX;
	vector<int> u_cost(N, INF), v_cost(N, INF);
	u_cost[u] = v_cost[v] = 0;
	queue<int> que;
	deque<int> leaves;
	que.push(u);
	while(!que.empty()) {
		int cur = que.front();
		que.pop();
		for(int nxt : edge_list[cur])
			if(u_cost[nxt] == INF)
				que.push(nxt), u_cost[nxt] = u_cost[cur] + 1;
	}
	que.push(v);
	while(!que.empty()) {
		int cur = que.front();
		que.pop();
		if(edge_list[cur].size() == 1)
			leaves.push_back(cur);
		for(int nxt : edge_list[cur])
			if(v_cost[nxt] == INF)
				que.push(nxt), v_cost[nxt] = v_cost[cur] + 1;
	}
	int ans = 0;
	for(int i : leaves)
		if(u_cost[i] < v_cost[i])
			ans = max(ans, v_cost[i] - 1);
	cout << ans << endl;
}
