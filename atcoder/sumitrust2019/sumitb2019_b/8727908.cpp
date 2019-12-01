// URL: https://atcoder.jp/contests/sumitrust2019/submissions/8727908
// Date: Sun, 01 Dec 2019 12:07:35 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  bool found = false;
  int i = 0;
  for (; i <= 50000; ++i)
    if (N == floor(i * 1.08)) {
      found = true;
      break;
    }
  if (!found)cout << ":(" << endl;
  else cout << i << endl;
}
