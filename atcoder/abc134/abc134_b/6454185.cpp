// URL: https://atcoder.jp/contests/abc134/submissions/6454185
// Date: Sat, 20 Jul 2019 12:09:48 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

  int N, D;
  std::cin >> N >> D;

  int ans = N / (2 * D + 1) + (N % (2 * D + 1) ? 1 : 0);

  std::cout << ans << std::endl;

}
