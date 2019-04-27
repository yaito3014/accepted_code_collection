// URL: https://atcoder.jp/contests/abc120/submissions/5137914
// Date: Sat, 27 Apr 2019 11:14:25 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    std::string S;
    std::cin >> S;

    size_t zero = std::count(S.begin(), S.end(), '0');

    std::cout << std::min(zero, S.size() - zero)*2 << std::endl;

}
