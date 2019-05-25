// URL: https://atcoder.jp/contests/abc127/submissions/5588170
// Date: Sat, 25 May 2019 12:03:34 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int A, B;
    std::cin >> A >> B;
    int ans = (A >= 13) ? B : (A >= 6) ? B / 2 : 0;
    std::cout << ans << std::endl;
}
