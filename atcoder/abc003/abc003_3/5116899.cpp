// URL: https://atcoder.jp/contests/abc003/submissions/5116899
// Date: Thu, 25 Apr 2019 07:46:06 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, K;
    std::cin >> N >> K;
    std::vector<int> R(N);
    for(auto&i:R)std::cin >> i;
    std::sort(R.rbegin(),R.rend());
    R.erase(R.begin()+ K, R.end());
    std::reverse(R.begin(), R.end());
    double ans = 0;
    for(auto&i:R)ans = (ans + i) / 2.0;
    std::cout << std::fixed << std::setprecision(6) << ans << std::endl;
}
