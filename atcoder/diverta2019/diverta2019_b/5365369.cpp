// URL: https://atcoder.jp/contests/diverta2019/submissions/5365369
// Date: Sat, 11 May 2019 14:06:55 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_


int main() {

    int R, G, B, N;
    std::cin >> R >> G >> B >> N;
    int ans = 0;
    for (int r = 0; r <= N / R; ++r) {
        for (int g = 0; g <= N / G; ++g) {
            int dif = N - r * R - g * G;
            if ((dif >= 0) && (dif % B == 0)) {
                ++ans;
            }
        }
    }
    std::cout << ans << std::endl;

}
