// URL: https://atcoder.jp/contests/abc071/submissions/5329777
// Date: Fri, 10 May 2019 10:05:18 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main(){
	
	int N;
	std::cin >> N;
	std::vector<int64_t> A(N);
	for(auto&i:A)std::cin>>i;
	std::sort(A.rbegin(),A.rend());
	int64_t ans = 0;
	int64_t a=-1;
	int count = 1;
	for(int i=0;i<N-1;++i){
		if(A[i]==A[i+1])++count;
		else count=1;
		if(count>=2){
			if(a==-1)a=A[i];
			else if(A[i]!=a){
				ans=a*A[i];
				break;
			}
		}
		if(count>=4){
			ans = A[i]*A[i];
			break;
		}
	}
	std::cout << ans << std::endl;
}
