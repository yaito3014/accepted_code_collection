// URL: https://atcoder.jp/contests/abc124/submissions/4970282
// Date: Sun, 14 Apr 2019 07:32:36 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    int A, B;
    std::cin >> A >> B;
    int ans = (((A > B) ? A : B) -= 1) + 1;
    ans += std::max(A, B);
    std::cout << ans << std::endl;
}
