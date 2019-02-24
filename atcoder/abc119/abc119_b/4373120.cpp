// URL: https://atcoder.jp/contests/abc119/submissions/4373120
// Date: Sun, 24 Feb 2019 12:32:39 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <cstring>
int main() {
    int N; std::cin >> N;
    double ans = 0;
    for (int i = 0; i < N; ++i) {
        double x; char buf[4]; std::cin >> x >> buf;
        ans += (strcmp(buf, "BTC") ? x : (x * 380000.0));
    }
    std::cout << std::fixed;
    std::cout << ans << std::endl;
}
