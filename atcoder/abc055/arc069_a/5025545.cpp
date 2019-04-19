// URL: https://atcoder.jp/contests/abc055/submissions/5025545
// Date: Fri, 19 Apr 2019 09:50:53 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main(){
	
	int64_t N, M;
	std::cin >> N >> M;
	int64_t ans = 0;
	if(M/2>=N){
		ans += N;
		M -= N*2;
	}
	else {
		ans += M/2;
		M %= 2;
	}
	ans += M / 4;
	std::cout << ans << std::endl;
}
