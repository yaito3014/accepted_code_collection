// URL: https://atcoder.jp/contests/diverta2019/submissions/5386573
// Date: Mon, 13 May 2019 07:04:03 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	int64_t N;
	std::cin >> N;
	int64_t ans=0;
	for(int64_t i=1;i*i<N;++i)
		if(N%i==0&&N/i-1>i)
			ans += N/i-1;
	std::cout << ans << std::endl;
}
