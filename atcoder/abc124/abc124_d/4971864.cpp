// URL: https://atcoder.jp/contests/abc124/submissions/4971864
// Date: Sun, 14 Apr 2019 09:53:32 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, K;
    std::string S;
    std::cin >> N >> K;
    std::cin >> S;
    std::vector<int> counts;//直立、逆立ちを交互にカウント。0を許して直立始まり直立終わり
    counts.reserve(N);//push_back高速化
    int count = 1;
    if (S.front() == '0')counts.push_back(0);//直立始まり
    for (int i = 1; i < N; i++) {
        if (S[i - 1] == S[i])++count;
        else {
            counts.push_back(count);
            count = 1;
        }
    }
    counts.push_back(count);
    if (S.back() == '0')counts.push_back(0);//直立終わり

    int size = counts.size();
    std::vector<int> sum(size + 1, 0);//累積和
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        tmp += counts[i];
        sum[i + 1] = tmp;
    }
    sum.push_back(sum.back());
    int ans = 0;
    for (int i = 0; i < size; i += 2)
        ans = std::max(ans, sum[std::min(i + 2 * K + 1, size)] - sum[i]);

    std::cout << ans << std::endl;
}
