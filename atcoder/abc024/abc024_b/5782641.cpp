// URL: https://atcoder.jp/contests/abc024/submissions/5782641
// Date: Mon, 03 Jun 2019 23:29:28 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int N,T;
	std::cin >> N >> T;
	std::map<int,int> m;
	for(int i=0;i<N;++i){
		int A;
		std::cin >> A;
		m[A]+=1;
		m[A+T]-=1;
	}
	int ans = 0;
	int prev = 0;
	int sum = 0;
	for(auto&v:m){
		sum+=v.second;
		if(prev==0&&sum>0)ans-=v.first;
		if(prev>0&&sum==0)ans+=v.first;
		prev=sum;
	}
	std::cout << ans << std::endl;
	
}
