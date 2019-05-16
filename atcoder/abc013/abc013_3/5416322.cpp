// URL: https://atcoder.jp/contests/abc013/submissions/5416322
// Date: Thu, 16 May 2019 08:40:19 +0000
// Language: C++14 (GCC 5.4.1)

#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int64_t N,H;
    std::cin >> N >> H;
    int64_t A,B,C,D,E;
    std::cin >> A >> B >> C >> D >> E;
    
    int64_t ans = INT64_MAX;
        
    for(int x=0;x<=N;++x){
    	int tmp = ((N-x)*E-H-B*x)/(D+E);
    	tmp=std::max(tmp,0);
    	for(int y=tmp;y<=N-x;++y){
    		if(H+B*x+D*y-E*(N-x-y)>0){
    			ans = std::min(ans,A*x+C*y);
    			break;
    		}
    	}
    }
        
    std::cout << ans << std::endl;
    
}
