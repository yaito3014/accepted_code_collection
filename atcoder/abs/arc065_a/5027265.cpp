// URL: https://atcoder.jp/contests/abs/submissions/5027265
// Date: Fri, 19 Apr 2019 13:20:10 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::string S;
    std::cin >> S;
    std::regex re(R"-((dream(er)?|eraser?)+)-");
    std::cout << (std::regex_match(S, re) ? "YES" : "NO") << std::endl;
}
