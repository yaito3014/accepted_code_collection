// URL: https://atcoder.jp/contests/abc129/submissions/5852810
// Date: Sun, 09 Jun 2019 13:17:09 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int H, W;
    std::cin >> H >> W;
    std::vector<std::string> S(H);
    for (auto& v : S)std::cin >> v;
    std::vector<std::vector<int>> memo_w(H, std::vector<int>(W, 0));
    std::vector<std::vector<int>> memo_h(H, std::vector<int>(W, 0));
    for (int h = 0; h < H; ++h) {
        int count = 0;
        for (int w = 0; w < W; ++w) {
            if (S[h][w] == '#')count = 0;
            else ++count;
            memo_w[h][w] = count;
        }
        for (int w = W - 1; w >= 1; --w)
            if (memo_w[h][w - 1] * memo_w[h][w])memo_w[h][w - 1] = memo_w[h][w];
    }
    for (int w = 0; w < W; ++w) {
        int count = 0;
        for (int h = 0; h < H; ++h) {
            if (S[h][w] == '#')count = 0;
            else ++count;
            memo_h[h][w] = count;
        }
        for (int h = H - 1; h >= 1; --h)
            if (memo_h[h - 1][w] * memo_h[h][w])memo_h[h - 1][w] = memo_h[h][w];
    }
    int ans = 0;
    for (int h = 0; h < H; ++h)for (int w = 0; w < W; ++w)ans = std::max(ans, memo_w[h][w] + memo_h[h][w] - 1);
    std::cout << ans << std::endl;
}
