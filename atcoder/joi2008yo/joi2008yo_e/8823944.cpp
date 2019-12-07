// URL: https://atcoder.jp/contests/joi2008yo/submissions/8823944
// Date: Sat, 07 Dec 2019 10:33:48 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int R, C;
  cin >> R >> C;
  vector<int> state(C, 0);
  for (int r = 0; r < R; ++r) {
    for (int c = 0; c < C; ++c) {
      int a;
      cin >> a;
      if (a)state[c] |= 1 << r;
    }
  }
  int ans = 0;
  const int Max = 1 << R;
  for (int mask = 0; mask < Max; ++mask) {
    int sum = 0;
    for (int i = 0; i < C; ++i) {
      int count = bitset<10>(mask ^ state[i]).count();
      sum += max(count, R - count);
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}
