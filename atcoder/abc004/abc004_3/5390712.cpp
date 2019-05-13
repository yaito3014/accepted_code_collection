// URL: https://atcoder.jp/contests/abc004/submissions/5390712
// Date: Mon, 13 May 2019 13:24:55 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	std::string S = "123456";
	int N;
	std::cin >> N;
	N%=30;
	S = S.substr(N/5,6-N/5)+S.substr(0,N/5);
	N%=5;
	if(N)
		S=S.substr(1,N+1-1)
		+S.substr(0,1)
		+S.substr(N+1,6-N+1);
	std::cout << S << std::endl;
	
}
