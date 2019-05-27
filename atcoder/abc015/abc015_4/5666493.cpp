// URL: https://atcoder.jp/contests/abc015/submissions/5666493
// Date: Mon, 27 May 2019 14:16:56 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

using std::vector;

int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int W;
	std::cin >> W;
	int N,K;
	std::cin >> N >> K;
	vector<int> A(N);
	vector<int> B(N);
	for(int i=0;i<N;++i)std::cin>>A[i]>>B[i];
	vector<vector<vector<int>>> dp(N+1,vector<vector<int>>(K+1,vector<int>(W+1,0)));
	for(int i=0;i<N;++i){
		for(int k=0;k<=K;++k){
			for(int w=0;w<=W;++w){
				if(A[i]<=w&&1<=k)
					dp[i+1][k][w]=std::max(
						dp[i][k][w],
						dp[i][k-1][w-A[i]]+B[i]
					);
				else dp[i+1][k][w]=dp[i][k][w];
			}
		}
	}
	std::cout<<dp[N][K][W]<<std::endl;
}
