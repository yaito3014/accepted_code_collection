// URL: https://atcoder.jp/contests/abc009/submissions/5396349
// Date: Tue, 14 May 2019 06:53:28 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	int N;
	std::cin >> N;
	int max=-1;
	int pre_max=-1;
	for(int i=0;i<N;++i){
		int A;
		std::cin >> A;
		if(max<A){
			pre_max=max;
			max=A;
		}else if(pre_max<A&&A!=max){
			pre_max=A;
		}
	}
	std::cout << pre_max << std::endl;
}
