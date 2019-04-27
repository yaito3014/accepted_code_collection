// URL: https://atcoder.jp/contests/abc125/submissions/5161872
// Date: Sat, 27 Apr 2019 13:36:23 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N;
    std::cin >> N;
    int count = 0;
    int64_t min = INT64_MAX;
    int64_t sum = 0;
    for (int i = 0; i < N; ++i) {
        int64_t A;
        std::cin >> A;
        if (A <= 0)++count;
        min = std::min(min, std::abs(A));
        sum += abs(A);
    }

    std::cout << sum - (count % 2 ? min * 2 : 0) << std::endl;

}
