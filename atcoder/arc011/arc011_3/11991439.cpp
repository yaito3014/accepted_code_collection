// URL: https://atcoder.jp/contests/arc011/submissions/11991439
// Date: Thu, 16 Apr 2020 16:29:56 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	string first, last;
	cin >> first >> last;
	int N;
	cin >> N;
	vector<string> s(N);
	for(auto& e : s)cin >> e;
	
	if(first == last) {
		cout << 0 << '
';
		cout << first << '
';
		cout << last << '
';
		return 0;
	}
	
	auto diff = [](const string& a, const string& b) {
		const int len = a.length();
		int c = 0;
		for(int i = 0; i < len; ++i)
			if(a[i] != b[i])++c;
		return c;
	};
	s.push_back(first);
	s.push_back(last);
	vector<deque<int>> g(N + 2);
	for(int i = 0; i < N + 2; ++i)
		for(int j = i + 1; j < N + 2; ++j)
			if(diff(s[i], s[j]) == 1)
				g[i].push_back(j),
				g[j].push_back(i);
	vector<int> memo(N + 2, -1), prev_node(N + 2, -1);
	queue<int> que;
	memo[N] = 0;
	que.push(N);
	while(!que.empty()) {
		int cur = que.front();
		que.pop();
		for(int nxt : g[cur]) {
			if(memo[nxt] != -1)continue;
			memo[nxt] = memo[cur] + 1;
			prev_node[nxt] = cur;
			que.push(nxt);
		}
	}
	if(memo[N + 1] == -1) {
		cout << -1 << endl;
		return 0;
	}
	cout << memo[N + 1] - 1 << "
";
	deque<int> path;
	int node = N + 1;
	while(node != N) {
		path.push_front(node);
		node = prev_node[node];
	}
	path.push_front(node);
	for(int node : path)cout << s[node] << "
";
}
