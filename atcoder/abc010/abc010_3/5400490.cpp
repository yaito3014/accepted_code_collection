// URL: https://atcoder.jp/contests/abc010/submissions/5400490
// Date: Tue, 14 May 2019 13:39:06 +0000
// Language: C++14 (GCC 5.4.1)

#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int txa,tya,txb,tyb,T,V;
    std::cin>>txa>>tya>>txb>>tyb>>T>>V;
    int n;
    std::cin >> n;
    bool ans=false;
    for(int i=0;i<n;++i){
    	int x,y;
    	std::cin >> x >> y;
    	if(
    	std::hypot(txa-x,tya-y)+std::hypot(txb-x,tyb-y)
    	<= T*V
    	)ans=true;
    }
    std::cout << (ans?"YES":"NO") << std::endl;
}
