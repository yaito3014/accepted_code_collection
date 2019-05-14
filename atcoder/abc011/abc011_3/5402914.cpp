// URL: https://atcoder.jp/contests/abc011/submissions/5402914
// Date: Tue, 14 May 2019 22:40:00 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int N;
    std::cin >> N;
    std::array<int, 3> NG;
    for(auto&v:NG)std::cin >> v;
    for(int i=0;i<100&&N>0;++i){
    	if(std::any_of(NG.begin(),NG.end(),[&](int a){return a==N;}))break;
    	for(int j=3;j>=1;--j){
    		if(std::any_of(NG.begin(),NG.end(),[&](int a){return a==N-j;}))continue;
    		N=std::max(0,N-j);
    		break;
    	}
    }
    std::cout << (N==0?"YES":"NO") << std::endl;
}
