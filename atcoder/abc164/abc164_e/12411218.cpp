// URL: https://atcoder.jp/contests/abc164/submissions/12411218
// Date: Mon, 27 Apr 2020 00:54:24 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int N, M, S;
	cin >> N >> M >> S;
	vector<deque<tuple<int, int, int>>> graph(N);
	int A_max = 0;
	for(int i = 0; i < M; ++i) {
		int U, V, A, B;
		cin >> U >> V >> A >> B, --U, --V;
		A_max = max(A_max, A);
		graph[U].emplace_back(V, B, A);
		graph[V].emplace_back(U, B, A);
	}
	const int Max = A_max * (N - 1);
	for(int i = 0; i < N; ++i) {
		int C, D;
		cin >> C >> D;
		graph[i].emplace_back(i, D, -C);
	}
	vector<vector<long long>>
		costs(N, vector<long long>(Max + 1, INT64_MAX));
	// T: (cost, coins, node)
	using T = tuple<long long, int, int>;
	priority_queue<T, vector<T>, greater<>> que;
	que.emplace(0, S, 0);
	while(!que.empty()) {
		auto [cost_sum, coins, node] = que.top();
		que.pop();
		for(const auto& [to, cost, pay] : graph[node]) {
			if(coins >= pay && cost_sum + cost < costs[to][min(Max, coins - pay)]) {
				costs[to][min(Max, coins - pay)] = cost_sum + cost;
				que.emplace(cost_sum + cost, min(Max, coins - pay), to);
			}
		}
	}
	for(int i = 1; i < N; ++i)
		cout << *min_element(begin(costs[i]), end(costs[i])) << '
';
}
