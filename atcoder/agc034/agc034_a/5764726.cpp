// URL: https://atcoder.jp/contests/agc034/submissions/5764726
// Date: Sun, 02 Jun 2019 13:51:52 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N, A, B, C, D;
    std::cin >> N >> A >> B >> C >> D;
    std::string S;
    std::cin >> S;
    bool ans = true;
    bool swappable = false;
    int rock = 0;
    int none = 0;
    int bigger = std::max(C, D);
    for (int i = 0; i < N; ++i) {
        if (S[i] == '#') {
            none = 0;
            if (++rock > 1 && A - 1 < i && i < bigger)ans = false;
        }
        else {
            rock = 0;
            if (B - 2 <= i && i < D + 1)
                if (++none >= 3)swappable = true;
        }
    }
    if (D < C && ans)ans = swappable;
    std::cout << (ans ? "Yes" : "No") << std::endl;
}
