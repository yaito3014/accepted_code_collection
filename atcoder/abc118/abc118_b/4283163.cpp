// URL: https://atcoder.jp/contests/abc118/submissions/4283163
// Date: Sat, 16 Feb 2019 12:14:14 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M; std::cin >> N >> M;
    std::vector<int> liked(M, 0);
    for (int i = 0; i < N; ++i) {
        int K; std::cin >> K;
        for (int j = 0; j < K; ++j) {
            int A; std::cin >> A;
            ++liked[A - 1];
        }
    }
    std::cout << std::count(liked.begin(), liked.end(), N);
}
