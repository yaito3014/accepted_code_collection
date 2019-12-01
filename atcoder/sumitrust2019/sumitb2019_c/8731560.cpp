// URL: https://atcoder.jp/contests/sumitrust2019/submissions/8731560
// Date: Sun, 01 Dec 2019 12:15:52 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  cout << (N % 100 <= N / 100 * 5 ? 1 : 0) << endl;
}
