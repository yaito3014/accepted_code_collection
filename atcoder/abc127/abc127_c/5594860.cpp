// URL: https://atcoder.jp/contests/abc127/submissions/5594860
// Date: Sat, 25 May 2019 12:11:02 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N, M;
    std::cin >> N >> M;
    int left = 0;
    int right = N;
    for (int i = 0; i < M; ++i) {
        int L, R;
        std::cin >> L >> R;
        left = std::max(left, L-1);
        right = std::min(right, R);
    }

    std::cout << std::max(right - left, 0) << std::endl;

}
