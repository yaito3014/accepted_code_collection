// URL: https://atcoder.jp/contests/iroha2019-day2/submissions/5213644
// Date: Wed, 01 May 2019 05:04:22 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int64_t X, Y, A, B, sx, sy, tx, ty;
    std::cin >> X >> Y >> A >> B >> sx >> sy >> tx >> ty;

    int64_t ta = (sx - tx) * (A - sy) + (sy - ty) * (sx - 0);
    int64_t tb = (sx - tx) * (B - sy) + (sy - ty) * (sx - X);
    int64_t tc = (0 - X) * (sy - A) + (A - B) * (0 - sx);
    int64_t td = (0 - X) * (ty - A) + (A - B) * (0 - tx);

    bool ans = tc * td <= 0 && ta * tb <= 0;

    std::cout << (ans ? "Yes" : "No") << std::endl;

}
