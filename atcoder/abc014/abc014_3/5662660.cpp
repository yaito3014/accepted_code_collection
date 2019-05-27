// URL: https://atcoder.jp/contests/abc014/submissions/5662660
// Date: Mon, 27 May 2019 09:15:36 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int n;
	std::cin >> n;
	std::map<int,int> p;
	for(int i=0;i<n;++i){
		int a,b;
		std::cin >> a >> b;
		p[a]+=1;
		p[b+1]-=1;
	}
	int ans=-1;
	int sum=0;
	for(auto&v:p){
		sum+=v.second;
		ans=std::max(ans,sum);
	}
	std::cout<<ans<<std::endl;
}
