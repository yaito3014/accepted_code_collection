// URL: https://atcoder.jp/contests/abc012/submissions/5402937
// Date: Tue, 14 May 2019 22:46:30 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int N;
    std::cin >> N;
    int h,m,s;
    h=N/3600;
    N%=3600;
    m=N/60;
    N%=60;
    s=N;
    printf("%02d:%02d:%02d
",h,m,s);
    
}
