// URL: https://atcoder.jp/contests/tdpc/submissions/10031055
// Date: Mon, 10 Feb 2020 14:41:41 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
	constexpr int Mod = 1000000007;
	int D;
	cin >> D;
	string N;
	cin >> N;
	int len = N.length();
	// dp[i][j][smaller]
	// i: index, j: sum % D, smaller: smaller than N?
	vector<vector<array<int,2>>> dp(len+1,vector<array<int,2>>(D));
	for(auto&tmp:dp)for(auto&elem:tmp)elem.fill(0);
	dp[0][0][0] = 1;
	for(int i	= 0; i < len; ++i){
		int n_i = N[i] - '0';
		for(int j = 0; j < D; ++j){
			for(auto smaller : { true, false }){
				int d = smaller ? 9 : n_i;
				for(int x = 0; x <= d; ++x){
					dp[i+1][(j+x)%D][smaller||x<d] += dp[i][j][smaller];
					dp[i+1][(j+x)%D][smaller||x<d] %= Mod;
				}
			}
		}
	}
	int ans = dp[len][0][0] + dp[len][0][1] - 1;
	ans %= Mod;
	cout << ans << endl;
}
