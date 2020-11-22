// URL: https://atcoder.jp/contests/abc184/submissions/18324358
// Date: Sun, 22 Nov 2020 12:34:28 +0000
// Language: C++ (GCC 9.2.1)
#include <cmath>
#include <iostream>
#include <numeric>

int main() {
  long long sr, sc, gr, gc;
  std::cin >> sr >> sc >> gr >> gc;
  int ans = 3;
  if (sr == gr && sc == gc)
    ans = 0;
  else if (std::abs(sr - gr) + std::abs(sc - gc) <= 3)
    ans = 1;
  else if (sr + sc == gr + gc || sr - sc == gr - gc)
    ans = 1;
  else if ((sr + sc) % 2 == (gr + gc) % 2)
    ans = 2;
  else {
  	for (int r = -3; r <= 3; ++r) {
      for (int c = -3; c <= 3; ++c) {
        if (std::abs(r) + std::abs(c) > 3) continue;
        long long sr_ = sr + r;
        long long sc_ = sc + c;
        if (std::abs(sr_ - gr) + std::abs(sc_ - gc) <= 3)
          ans = std::min(ans, 2);
        else if (sr_ + sc_ == gr + gc || sr_ - sc_ == gr - gc)
          ans = std::min(ans, 2);
        else if ((sr_ + sc_) % 2 == (gr + gc) % 2)
          ans = std::min(ans, 3);
      }
    }
  }
  std::cout << ans << '\n';
}
