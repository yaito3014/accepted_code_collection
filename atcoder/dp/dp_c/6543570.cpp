// URL: https://atcoder.jp/contests/dp/submissions/6543570
// Date: Fri, 26 Jul 2019 08:39:11 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main(){
	int N;
	std::cin >> N;
	std::vector<std::array<int,3>> abc(N);
	for(int i=0;i<N;++i)
		for(int j=0;j<3;++j)
			std::cin >> abc[i][j];
	std::vector<std::array<int,3>> dp(N+1);
	for(int i=0;i<N;++i){
		for(int j=0;j<3;++j){
			for(int k=0;k<3;++k){
				if(j==k)continue;
				dp[i+1][j]=std::max(
					dp[i+1][j],
					dp[i][k]+abc[i][k]
				);
			}
		}
	}
	int ans = 0;
	for(int i=0;i<3;++i)
		ans = std::max(ans, dp[N][i]);
	std::cout << ans << std::endl;
}
