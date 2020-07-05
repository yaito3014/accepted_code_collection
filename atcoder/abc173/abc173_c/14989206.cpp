// URL: https://atcoder.jp/contests/abc173/submissions/14989206
// Date: Sun, 05 Jul 2020 12:23:11 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int H, W, K;
  std::cin >> H >> W >> K;
  std::vector<std::string> c(H);
  for (auto& row : c) std::cin >> row;
  int sum = 0, ans = 0;
  for (auto& row : c) sum += std::count(cbegin(row), cend(row), '#');
  const int kH = 1 << H;
  const int kW = 1 << W;
  for (int mh = 0; mh < kH; ++mh) {
    for (int mw = 0; mw < kW; ++mw) {
      int s = 0;
      for (int h = 0; h < H; ++h)
        if (mh >> h & 1) s += std::count(cbegin(c[h]), cend(c[h]), '#');
      for (int w = 0; w < W; ++w)
        if (mw >> w & 1)
          for (const auto& row : c) s += row[w] == '#';
      for (int h = 0; h < H; ++h)
        for (int w = 0; w < W; ++w)
          if (mh >> h & 1 && mw >> w & 1 && c[h][w] == '#') --s;
      if (sum - s == K) ++ans;
    }
  }
  std::cout << ans << '\n';
}
