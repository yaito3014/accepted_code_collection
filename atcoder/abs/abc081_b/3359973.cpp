// URL: https://atcoder.jp/contests/abs/submissions/3359973
// Date: Sun, 07 Oct 2018 01:27:38 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
#include <climits>

int main(void){
	int N;
	int min = INT_MAX;
	std::cin >> N;
	for(int i = 0;i<N;++i){
		int tmp;
		int count = 0;
		std::cin >> tmp;
		for(;!(tmp%2);tmp/=2,count++);
		min = std::min(min, count);
	}
	
	printf("%d", min);
	return 0;
}
