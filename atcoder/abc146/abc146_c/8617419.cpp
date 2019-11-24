// URL: https://atcoder.jp/contests/abc146/submissions/8617419
// Date: Sun, 24 Nov 2019 12:34:16 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int64_t A, B, X;
  cin >> A >> B >> X;
  int64_t l = 0, r = 1000000001;
  while (r - l > 1) {
    int64_t x = l + (r - l) / 2;
    if (A * x + B * (int)(log10(x)+1) <= X)l = x;
    else r = x;
  }
  cout << l << endl;
}
