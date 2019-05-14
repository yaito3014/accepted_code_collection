// URL: https://atcoder.jp/contests/abc011/submissions/5402867
// Date: Tue, 14 May 2019 22:26:53 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    std::string S;
    std::cin >> S;
    std::transform(S.begin(),S.end(),S.begin(),[](auto a){return std::tolower(a);});
    S[0] += 'A'-'a';
    std::cout << S << std::endl;
}
