// URL: https://atcoder.jp/contests/abs/submissions/3360885
// Date: Sun, 07 Oct 2018 04:24:45 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main(void){
	int A, B, C, X;
	int result = 0;
	std::cin >> A >> B >> C >> X;
	for(int a = A;a>=0;--a)
	if(500*a<=X)for(int b = B;b>=0;--b)
	if(500*a+100*b<=X)for(int c = C;c>=0;--c)
	if(500*a+100*b+50*c==X)result++;
	printf("%d", result);
	return 0;
}
