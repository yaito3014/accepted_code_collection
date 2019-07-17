// URL: https://codeforces.com/contest/4/submission/57201048
// Date: Wed, 17 Jul 2019 13:44:24 +0000
// Language: GNU C++17
﻿#include "bits/stdc++.h"

int main() {

    int W;
    std::cin >> W;
    bool ans = W >= 4 && W % 2 == 0;
    std::cout << (ans ? "YES" : "NO") << std::endl;

}
