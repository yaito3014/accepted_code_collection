// URL: https://atcoder.jp/contests/abs/submissions/5027408
// Date: Fri, 19 Apr 2019 13:38:27 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    int N;
    std::cin >> N;

    struct {
        int x, y;
        int t;
    } deer = { 0,0,0 };
    
    bool ans = true;
    for (int i = 0; i < N; ++i) {
        int t, x, y;
        std::cin >> t >> x >> y;
        int distance = abs(x - deer.x) + abs(y - deer.y);
        if (distance > t - deer.t || abs(distance - (t-deer.t))%2)ans = false;
        else deer = { x,y,t };
    }
    std::cout << (ans ? "Yes" : "No") << std::endl;
}
