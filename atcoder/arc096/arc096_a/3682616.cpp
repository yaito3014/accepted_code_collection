// URL: https://atcoder.jp/contests/arc096/submissions/3682616
// Date: Wed, 28 Nov 2018 23:05:17 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
int main(){
	int A, B, C, X, Y;
	std::cin >> A >> B >> C >> X >> Y;
	int result = A*X+B*Y;
	result -= std::max(((A+B)-C*2),0)*std::min(X,Y);
	result -= std::max(((X<Y?B:A)-C*2),0)*abs(Y-X);
	std::cout << result << std::endl;
}
