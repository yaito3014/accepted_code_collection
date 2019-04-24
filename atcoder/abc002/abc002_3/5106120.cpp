// URL: https://atcoder.jp/contests/abc002/submissions/5106120
// Date: Wed, 24 Apr 2019 06:59:41 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int x, y, a, b, c, d;
    std::cin >> x >> y >> a >> b >> c >> d;
    a -= x;c -= x;b-=y;d-=y;
    std::cout << std::fixed << std
    ::setprecision(2) << abs(a*d-b*c)/2.0 << std::endl;
}
