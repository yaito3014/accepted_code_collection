// URL: https://atcoder.jp/contests/abc125/submissions/5172346
// Date: Sun, 28 Apr 2019 05:54:38 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {

    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (auto& i : A)std::cin >> i;
    int bucketSize = static_cast<int>(std::sqrt(N));
    std::vector<int> bucket(N / bucketSize + (N % bucketSize ? 1 : 0), 0);
    for (int i = 0; i < N; ++i) bucket[i / bucketSize] = gcd(bucket[i / bucketSize], A[i]);

    int ans = -1;

    auto getGCD = [&](int l, int r) {
        int tmp = 0;
        for (int i = l; i < r; ++i) {
            if (i % bucketSize || i + bucketSize >= r)tmp = gcd(tmp, A[i]);
            else {
                tmp = gcd(tmp, bucket[i / bucketSize]);
                i += bucketSize - 1;
            }
        }
        return tmp;
    };

    for (int i = 0; i < N; ++i) {
        ans = std::max(ans, gcd(getGCD(0, i), getGCD(i + 1, N)));
    }
    std::cout << ans << std::endl;
}
