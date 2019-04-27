// URL: https://atcoder.jp/contests/abc123/submissions/5136921
// Date: Sat, 27 Apr 2019 09:35:06 +0000
// Language: C++14 (GCC 5.4.1)

#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    uint64_t N;
    std::cin >> N;
    uint64_t min = UINT64_MAX;
    for(int i = 0;i < 5;++i){
    	uint64_t in;
    	std::cin >> in;
    	min = std::min(min, in);
    }
    std::cout << (N / min + (N%min?1:0)+4) << std::endl;
}
