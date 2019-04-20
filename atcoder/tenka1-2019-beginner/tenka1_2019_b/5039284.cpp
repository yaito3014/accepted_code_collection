// URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/5039284
// Date: Sat, 20 Apr 2019 12:06:16 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N;
    std::string S;
    int K;
    std::cin >> N >> S >> K;
    for (auto& i : S) {
        if (i != S[K - 1])i = '*';
    }
    std::cout << S << std::endl;
}   
