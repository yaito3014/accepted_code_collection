// URL: https://atcoder.jp/contests/arc104/submissions/17163769
// Date: Sat, 03 Oct 2020 12:19:39 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <array>
#include <iostream>
#include <numeric>
#include <string>
#include <string_view>
#include <vector>

int main() {
  int n;
  std::string s;
  std::cin >> n >> s;
  constexpr std::string_view kGen = "ATGC";
  std::array<std::vector<int>, kGen.length()> cnt;
  cnt.fill(std::vector<int>(n + 1, 0));
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < n; ++j)
      if (kGen[i] == s[j]) ++cnt[i][j + 1];
    std::inclusive_scan(cbegin(cnt[i]), cend(cnt[i]), begin(cnt[i]));
  }
  int ans = 0;
  for (int i = 0; i < n; ++i)
    for (int j = i + 2; j <= n; ++j)
      if (cnt[0][j] - cnt[0][i] == cnt[1][j] - cnt[1][i] &&
          cnt[2][j] - cnt[2][i] == cnt[3][j] - cnt[3][i])
        ++ans;
  std::cout << ans << '\n';
}
