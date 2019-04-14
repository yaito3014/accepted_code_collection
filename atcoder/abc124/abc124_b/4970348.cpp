// URL: https://atcoder.jp/contests/abc124/submissions/4970348
// Date: Sun, 14 Apr 2019 07:37:59 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int N;
    std::cin >> N;
    int max = -1;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int H;
        std::cin >> H;
        if (H >= max) {
            ++ans;
            max = H;
        }
    }
    std::cout << ans << std::endl;

}
