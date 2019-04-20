// URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/5053513
// Date: Sat, 20 Apr 2019 12:53:20 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);


    int N;
    std::string S;
    std::cin >> N >> S;
    std::vector<int> white(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        white[i + 1] = white[i] + ((S[i] == '.')?1:0);
    }
    int min = N;
    for (int i = 0; i <= N; ++i) {
        int change = (i-white[i]) + (white[N] - white[i]);
        min = std::min(min, change);
    }
    std::cout << min << std::endl;
}
