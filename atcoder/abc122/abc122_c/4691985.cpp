// URL: https://atcoder.jp/contests/abc122/submissions/4691985
// Date: Sun, 24 Mar 2019 12:19:49 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__


int main() {
    int N,Q; std::cin >> N >> Q;
    std::string S; std::cin >> S;
    std::vector<int> counts(N, 0);
    std::vector<int> ans(Q);
    int count = 0;
    for (int i = 0; i < N - 1; ++i) {
        if (S[i] == 'A' && S[i + 1] == 'C')counts[i + 1] = ++count;
        else counts[i + 1] = count;
    }
    for (int i = 0; i < Q; ++i) {
        int l, r; std::cin >> l >> r;
        ans[i] = counts[r - 1] - counts[l - 1];
    }
    for (auto& v : ans)std::cout << v << std::endl;
}
