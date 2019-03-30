// URL: https://atcoder.jp/contests/exawizards2019/submissions/4766664
// Date: Sat, 30 Mar 2019 12:06:26 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main() {

    int N; std::cin >> N;
    std::string s; std::cin >> s;
    int r = std::count(s.begin(), s.end(), 'R');
    std::cout << ((r + r > s.length()) ? "Yes" : "No") << std::endl;
}
