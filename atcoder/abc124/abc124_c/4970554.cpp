// URL: https://atcoder.jp/contests/abc124/submissions/4970554
// Date: Sun, 14 Apr 2019 07:55:06 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    int N;
    std::string S;
    std::cin >> S;    
    N = S.length();
    int count = 0;
    if (N > 1) {
        for (int i = 0; i < N; i++)if (S[i] != (i % 2 ? '1' : '0'))++count;
    }
    int ans = std::min(count, N - count);
    std::cout << ans << std::endl;
}
