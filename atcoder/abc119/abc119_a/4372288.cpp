// URL: https://atcoder.jp/contests/abc119/submissions/4372288
// Date: Sun, 24 Feb 2019 12:23:28 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);
    std::cout << ((y <= 2019 && m <= 4) ? "Heisei" : "TBD");
}
