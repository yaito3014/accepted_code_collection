// URL: https://atcoder.jp/contests/abs/submissions/3359871
// Date: Sun, 07 Oct 2018 01:01:21 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main(void){
	
	int result = 0;
	for(int i = 0;i<3;++i){
		if(getchar()=='1')result++;
	}
	printf("%d", result);
	return 0;
}
