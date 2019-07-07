// URL: https://atcoder.jp/contests/abc133/submissions/6300341
// Date: Sun, 07 Jul 2019 14:14:05 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<int64_t> A(N);
    for (auto& v : A)std::cin >> v;

    int64_t sum = 0;
    for (int i = 0; i < N; ++i)sum += A[i];

    std::vector<int64_t> ans(N, 0);

    ans[0] = sum;
    for (int i = 1; i < N - 1; i+=2)ans[0] -= 2 * A[i];
    for (int i = 0; i < N - 1; ++i)ans[i + 1] = 2 * A[i] - ans[i];
    for (auto& v : ans)std::cout << v << " ";
    std::cout << std::endl;
}
