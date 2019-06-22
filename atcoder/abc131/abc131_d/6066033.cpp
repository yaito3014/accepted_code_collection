// URL: https://atcoder.jp/contests/abc131/submissions/6066033
// Date: Sat, 22 Jun 2019 12:32:40 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"


int main() {

    int N;
    std::cin >> N;
    std::vector<std::pair<int64_t, int64_t>> BA(N);
    for (auto& v : BA)std::cin >> v.second >> v.first;
    std::sort(BA.begin(), BA.end());
    int64_t sum = 0;
    bool ans = true;
    for (auto& v : BA) {
        sum += v.second;
        if (sum <= v.first)continue;
        ans = false;
        break;
    }
    std::cout << (ans ? "Yes" : "No") << std::endl;
}
