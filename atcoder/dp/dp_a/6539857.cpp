// URL: https://atcoder.jp/contests/dp/submissions/6539857
// Date: Thu, 25 Jul 2019 23:33:17 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main(){
	int N;
	std::cin >> N;
	std::vector<int> h(N);
	for(auto&v:h)std::cin >> v;
	std::vector<int> dp(N,INT_MAX/4);
	dp[0]=0;
	for(int i=0;i<N;++i){
		if(i+2<N)dp[i+2]=std::min(dp[i+2],dp[i]+std::abs(h[i+2]-h[i]));
		if(i+1<N)dp[i+1]=std::min(dp[i+1],dp[i]+std::abs(h[i+1]-h[i]));
	}
	std::cout << dp[N-1] << std::endl;
}
