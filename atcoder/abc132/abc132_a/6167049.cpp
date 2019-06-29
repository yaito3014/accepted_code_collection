// URL: https://atcoder.jp/contests/abc132/submissions/6167049
// Date: Sat, 29 Jun 2019 12:13:43 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    std::string S;
    std::cin >> S;
    std::map<char, int> m;
    for (auto& v : S)++m[v];
    bool ans = m.size() == 2 && std::all_of(begin(m), end(m), [](auto p) {return p.second == 2; });
    std::cout << (ans ? "Yes" : "No") << std::endl;
}
