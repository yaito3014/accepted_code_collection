// URL: https://atcoder.jp/contests/iroha2019-day1/submissions/5204999
// Date: Tue, 30 Apr 2019 11:03:59 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N, X, Y;
    std::cin >> N >> X >> Y;
    std::vector<int> A(N);
    int sum = 0;
    for (auto& i : A) {
        std::cin >> i;
        sum += i;
    }
    std::sort(A.rbegin(), A.rend());
    int t = 0;
    for (int i = 0; i < N; i += 2)t += A[i];
    int Aoki = sum - t + Y;
    int Takahashi = t + X;
    std::cout << (Takahashi == Aoki ? "Draw" : (Takahashi > Aoki) ? "Takahashi" : "Aoki") << std::endl;
}
