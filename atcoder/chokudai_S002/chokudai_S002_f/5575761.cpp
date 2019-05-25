// URL: https://atcoder.jp/contests/chokudai_S002/submissions/5575761
// Date: Sat, 25 May 2019 05:15:02 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {
    int N;
    std::cin >> N;
    std::set<std::pair<int64_t, int64_t>> s;
    for (int i = 0; i < N; ++i) {
        int64_t A, B;
        std::cin >> A >> B;
        if (A > B)std::swap(A, B);
        auto p = std::make_pair(A, B);
        if (s.find(p) == s.end())s.insert(p);
    }
    std::cout << s.size() << std::endl;

}
