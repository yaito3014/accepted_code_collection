// URL: https://atcoder.jp/contests/abc010/submissions/5400342
// Date: Tue, 14 May 2019 13:28:17 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int n;
    std::cin >> n;
    int ans = 0;
    for(int i=0;i<n;++i){
    	int a;
    	std::cin >> a;
    	--a;
    	if(2<a%6)
    		ans+=a%6-2;
    	else if(a%6==1)++ans;
    }
    std::cout << ans << std::endl;
}
