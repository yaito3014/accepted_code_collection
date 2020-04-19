// URL: https://atcoder.jp/contests/indeednow-qualb/submissions/12059879
// Date: Sun, 19 Apr 2020 01:19:51 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int N, C;
	cin >> N >> C;
	vector<int> a(N);
	for(auto& e : a)cin >> e, --e;
	vector<int> previous(C, 0);
	using ll = long long;
	vector<ll> sum(C, 0);
	for(int i = 0; i < N; ++i) {
		ll len = (i - previous[a[i]]);
		sum[a[i]] += len * (len + 1) / 2;
		previous[a[i]] = i + 1;
	}
	for(int i = 0; i < C; ++i) {
		ll len = (N - previous[i]);
		sum[i] += len * (len + 1) / 2;
	}
	const ll all_sum = N * (N + 1ll) / 2;
	for(int i = 0; i < C; ++i)
		cout << (all_sum - sum[i]) << '\n';
}
