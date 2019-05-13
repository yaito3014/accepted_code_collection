// URL: https://atcoder.jp/contests/abc005/submissions/5391015
// Date: Mon, 13 May 2019 13:47:34 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	int T;
	std::cin >> T;
	int N;
	std::cin >> N;
	std::vector<int> A(N);
	for(auto&i:A)std::cin>>i;
	int M;
	std::cin >> M;
	std::vector<int> B(M);
	for(auto&i:B)std::cin>>i;
	
	int b=0;
	for(int a=0;a<N&&b<M;++a){
		if(A[a]<=B[b]&&B[b]<=A[a]+T)++b;
	}
	std::cout << (b==M?"yes":"no") << std::endl;
}
