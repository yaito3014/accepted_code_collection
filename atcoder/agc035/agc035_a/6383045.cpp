// URL: https://atcoder.jp/contests/agc035/submissions/6383045
// Date: Sun, 14 Jul 2019 14:13:46 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<int> a(N);
    for (auto& v : a)std::cin >> v;

    bool ans = false;
    std::map<int, int> m;
    for (auto& v : a)++m[v];
    if (m.size() == 1) {
        if (m.begin()->first == 0)ans = true;
    }
    else if (m.size() == 2) {
        auto x = m.begin();
        auto y = std::next(x);
        if (x->first == 0 || y->first == 0) {
            ans = x->second*2 == y->second;
        }
    }
    else if (m.size() == 3) {
        auto x = m.begin();
        auto y = std::next(x);
        auto z = std::next(y);
        ans = ((x->first ^ y->first) == z->first && x->second == y->second && y->second == z->second);
    }

    std::cout << (ans ? "Yes" : "No") << std::endl;

}
