// URL: https://atcoder.jp/contests/abc122/submissions/4688765
// Date: Sun, 24 Mar 2019 12:08:06 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__


int main() {
    std::string S; std::cin >> S;
    int ans = 0;
    int count = 0;
    for (auto& c : S) {
        switch (c) {
        case 'A':case 'C':case 'G':case 'T':
            ++count;
            break;
        default:
            count = 0;
            break;
        }
        ans = std::max(ans, count);
    }
    std::cout << ans << std::endl;
}
