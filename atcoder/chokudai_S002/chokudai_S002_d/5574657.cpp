// URL: https://atcoder.jp/contests/chokudai_S002/submissions/5574657
// Date: Sat, 25 May 2019 05:08:44 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {
    int N;
    std::cin >> N;
    int64_t ans = 0;
    for (int i = 0; i < N; ++i) {
        int64_t A, B;
        std::cin >> A >> B;
        ans += std::max(A, B);
    }
    std::cout << ans << std::endl;

}
