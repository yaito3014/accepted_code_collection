// URL: https://atcoder.jp/contests/iroha2019-day1/submissions/5208571
// Date: Tue, 30 Apr 2019 15:29:34 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int64_t N, A, B;
    std::cin >> N >> A >> B;
    std::vector<int64_t> D(B);
    for (auto& i : D)std::cin >> i;
    std::sort(D.begin(), D.end());
    D.push_back(N + 1);
    int64_t count = 0;
    int64_t prev = 0;
    for (int i = 0; i <= B; ++i) {
        int64_t dif = D[i] - prev - 1;
        count += dif / A;
        prev = D[i];
    }
    std::cout << N - count - B << std::endl;
}
