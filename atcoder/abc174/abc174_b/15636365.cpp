// URL: https://atcoder.jp/contests/abc174/submissions/15636365
// Date: Sun, 02 Aug 2020 13:29:36 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>

int main() {
  int N;
  long long D;
  std::cin >> N >> D;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
  	long long X, Y;
  	std::cin >> X >> Y;
  	if (X * X + Y * Y <= D * D) ++ans;
  }
  std::cout << ans << '\n';
}
