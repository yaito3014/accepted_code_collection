// URL: https://atcoder.jp/contests/abc131/submissions/6085109
// Date: Sat, 22 Jun 2019 14:50:00 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N, K;
    std::cin >> N >> K;
    int max = N * (N - 1) / 2 - (N - 1);
    int ans = -1;
    if (max < K) {
        std::cout << -1 << std::endl;
        return 0;
    }
    int M = N - 1 + max - K;
    std::cout << M << std::endl;
    for (int i = 2; i <= N; ++i)std::cout << 1 << " " << i << "\n";
    for (int i = N - 1; i < M;) {
        for (int j = 2; j < N && i < M; ++j) {
            for (int k = j + 1; k <= N && i < M; ++k, ++i) {
                std::cout << j << " " << k << "\n";
            }
        }
    }
}
