// URL: https://atcoder.jp/contests/abc131/submissions/6054321
// Date: Sat, 22 Jun 2019 12:03:32 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    std::string S;
    std::cin >> S;
    char prev = 0;
    bool ans = false;
    for (auto& v : S) {
        if (prev == v)ans = true;
        prev = v;
    }
    std::cout << (ans ? "Bad" : "Good") << std::endl;
}
