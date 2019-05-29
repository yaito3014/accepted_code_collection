// URL: https://atcoder.jp/contests/abc018/submissions/5685557
// Date: Wed, 29 May 2019 08:21:53 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
    
    std::string S;
    int N;
    std::cin >> S;
    std::cin >> N;
    for(int i=0;i<N;++i){
    	int l,r;
    	std::cin >> l >> r;
    	std::reverse(S.begin()+(l-1),S.begin()+r);
    }
    std::cout << S << std::endl;
}
