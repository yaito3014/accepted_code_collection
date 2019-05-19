// URL: https://atcoder.jp/contests/abc126/submissions/5485227
// Date: Sun, 19 May 2019 22:47:34 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int S;
    std::cin >> S;
    int former=S/100;
    int latter=S%100;
    bool yymm = false;
    bool mmyy = false;
    
    yymm = 1<=latter&&latter<=12;
    mmyy = 1<=former&&former<=12;
    
    std::cout <<
    ((yymm&&mmyy)?"AMBIGUOUS"
    :(yymm)?"YYMM"
    :(mmyy)?"MMYY"
    :"NA")
    << std::endl;
}
