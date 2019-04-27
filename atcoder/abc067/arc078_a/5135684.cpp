// URL: https://atcoder.jp/contests/abc067/submissions/5135684
// Date: Sat, 27 Apr 2019 07:55:15 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {
    long long int N, b = 0, a[100000 * 2] = {}, ans = 0, sum[100000 * 2 + 1] = {}, dif = 0, mini = 1000000000 * 2 + 1;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }
    for (int i = 0; i < N - 1; i++) {
        b = (sum[N] - sum[i + 1]) - sum[i + 1];
        dif = std::abs(b);
        mini = std::min(dif, mini);
    }
    std::cout << mini << std::endl;
    return 0;
}
