// URL: https://atcoder.jp/contests/abc131/submissions/6057306
// Date: Sat, 22 Jun 2019 12:09:01 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N, L;
    std::cin >> N >> L;
    int sum = 0;
    int min = INT_MAX;
    for (int i = 0; i < N; ++i) {
        sum += L + i;
        if (std::abs(L + i) < std::abs(min))min = L + i;
    }
    int ans = sum - min;
    std::cout << ans << std::endl;
    
}
