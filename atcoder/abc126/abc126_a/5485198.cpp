// URL: https://atcoder.jp/contests/abc126/submissions/5485198
// Date: Sun, 19 May 2019 22:37:36 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int N,K;
    std::cin >> N >> K;
    std::string S;
    std::cin >> S;
    
    S[K-1]=std::tolower(S[K-1]);
    
    std::cout << S << std::endl;
}
