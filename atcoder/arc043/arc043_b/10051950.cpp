// URL: https://atcoder.jp/contests/arc043/submissions/10051950
// Date: Tue, 11 Feb 2020 22:50:01 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

struct modint {
	static constexpr int Mod = 1000000007;
	int value = 0;
	modint() = default;
	modint(int v) : value(v % Mod) {}
	modint& operator +=(const modint& rhs){
		value += rhs.value;
		if(value >= Mod)value -= Mod;
		return *this;
	}
};

modint operator +(modint lhs, const modint& rhs){
	return lhs += rhs;
}

int main(){
	int N;
	cin >> N;
	vector<int> D(N);
	for(auto&v:D)cin >> v;
	sort(begin(D), end(D));
	constexpr int P = 4;  // 何問選ぶか
	vector<vector<modint>> dp(P, vector<modint>(N, 0));
	fill(begin(dp[0]), end(dp[0]), 1);
	for(int i = 1; i < P; ++i) {
		vector<modint> cumsum(N+1, 0);
		for(int j = 0; j < N; ++j)
			cumsum[j+1] = cumsum[j] + dp[i-1][j];
		for(int j = 0; j < N; ++j){
			auto iter = upper_bound(begin(D), end(D), D[j] / 2);
			int index = distance(begin(D), iter);
			dp[i][j] = cumsum[index];
		}
	}
	modint ans = accumulate(begin(dp[P-1]), end(dp[P-1]), modint{0});
	cout << ans.value << endl;
}
