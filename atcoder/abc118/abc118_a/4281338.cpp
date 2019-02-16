// URL: https://atcoder.jp/contests/abc118/submissions/4281338
// Date: Sat, 16 Feb 2019 12:05:36 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    std::cout << (B + ((B % A) ? -A : A)) << std::endl;
}
