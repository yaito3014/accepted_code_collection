// URL: https://atcoder.jp/contests/abc125/submissions/5151743
// Date: Sat, 27 Apr 2019 12:41:19 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {
    
    int N;
    std::cin >> N;
    std::vector<int> V(N);
    std::vector<int> C(N);
    for (auto& i : V)std::cin >> i;
    for (auto& i : C)std::cin >> i;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int dif = V[i] - C[i];
        if (dif > 0)ans += dif;
    }
    std::cout << ans << std::endl;
}
