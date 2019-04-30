// URL: https://atcoder.jp/contests/iroha2019-day1/submissions/5204866
// Date: Tue, 30 Apr 2019 10:50:18 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    std::string S;
    int K;
    std::cin >> S >> K;

    K %= S.size();
    std::string ans = S.substr(K, S.size() - K) + S.substr(0, K);
    std::cout << ans << std::endl;
};
