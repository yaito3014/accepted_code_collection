// URL: https://atcoder.jp/contests/abc127/submissions/5590917
// Date: Sat, 25 May 2019 12:05:54 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int r, D, x2000;
    std::cin >> r >> D >> x2000;
    int x200i = x2000;
    for (int i = 0; i < 10; ++i) {
        x200i = r * x200i - D;
        std::cout << x200i << std::endl;
    }

}
