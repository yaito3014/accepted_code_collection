// URL: https://atcoder.jp/contests/abc135/submissions/6561585
// Date: Sat, 27 Jul 2019 12:03:03 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;
int main(){
	int A, B;
	cin >> A >> B;
	int K = (A+B)/2;
	if(std::abs(A-K)==std::abs(B-K))
		std::cout << K << std::endl;
	else
	 cout << "IMPOSSIBLE" << endl;
}
