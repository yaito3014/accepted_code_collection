// URL: https://atcoder.jp/contests/dp/submissions/6539877
// Date: Thu, 25 Jul 2019 23:42:46 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main(){
	int N, K;
	std::cin >> N >> K;
	std::vector<int> h(N);
	for(auto&v:h)std::cin >> v;
	std::vector<int> dp(N,INT_MAX-2000);
	dp[0]=0;
	for(int i=0;i<N;++i){
		for(int k=1;k<=K;++k){
			if(i+k<N)dp[i+k]=std::min(dp[i+k],dp[i]+std::abs(h[i+k]-h[i]));
		}
	}
	std::cout << dp[N-1] << std::endl;
}
