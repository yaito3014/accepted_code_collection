// URL: https://atcoder.jp/contests/chokudai_S002/submissions/5575591
// Date: Sat, 25 May 2019 05:13:53 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int A, B;
        std::cin >> A >> B;
        std::cout << gcd(A,B) << std::endl;
    }

}
