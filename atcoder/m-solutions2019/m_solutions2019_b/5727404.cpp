// URL: https://atcoder.jp/contests/m-solutions2019/submissions/5727404
// Date: Sat, 01 Jun 2019 12:05:17 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    std::string S;
    std::cin >> S;
    bool ans = std::count(S.begin(), S.end(), 'o') + 15 - S.size() >= 8;
    std::cout << (ans ? "YES" : "NO") << std::endl;

}
