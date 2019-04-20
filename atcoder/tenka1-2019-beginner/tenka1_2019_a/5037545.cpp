// URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/5037545
// Date: Sat, 20 Apr 2019 12:03:49 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int A, B, C;
    std::cin >> A >> B >> C;
    if (A > B)std::swap(A, B);
    std::cout << (A<C&&C<B?"Yes":"No") << std::endl;

}
