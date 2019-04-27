// URL: https://atcoder.jp/contests/abc067/submissions/5134792
// Date: Sat, 27 Apr 2019 06:40:44 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int A, B;
    std::cin >> A >> B;
    std::cout << (A % 3 && B % 3 && (A + B) % 3 ? "Impossible" : "Possible") << std::endl;

}
