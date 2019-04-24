// URL: https://atcoder.jp/contests/abc003/submissions/5113212
// Date: Wed, 24 Apr 2019 22:44:04 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;
    double ans = N*(N+1)/2*10000/double(N);
    
    std::cout << std::fixed << std::setprecision(6) << ans << std::endl;
    
}
