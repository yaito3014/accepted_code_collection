// URL: https://atcoder.jp/contests/abc127/submissions/5616285
// Date: Sat, 25 May 2019 13:39:18 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N, M;
    std::cin >> N >> M;
    std::vector<unsigned long long int> A(N);
    for (auto& v : A)std::cin >> v;
    std::sort(A.begin(), A.end());
    std::vector<std::pair<int, unsigned long long int>> BC(M);
    for (auto& v : BC)std::cin >> v.first >> v.second;
    std::sort(BC.begin(), BC.end(), [](const auto& a, const auto& b) {return b.second < a.second; });
    int64_t ans = 0;
    int index = 0;
    for (int i = 0; i < M && index < N; ++i) {
        for (int j = 0; j < BC[i].first && index < N; ++j, ++index) {
            ans += std::max(A[index], BC[i].second);
        }
    }
    for (int i = index; i < N; ++i)ans += A[i];
    std::cout << ans << std::endl;
}
