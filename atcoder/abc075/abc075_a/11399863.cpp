// URL: https://atcoder.jp/contests/abc075/submissions/11399863
// Date: Tue, 31 Mar 2020 15:35:14 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
  int A, B, C;
  std::cin >> A >> B >> C;
  int ans = A == B ? C : B == C ? A : B;
  std::cout << ans << std::endl;
}
