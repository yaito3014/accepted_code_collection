// URL: https://atcoder.jp/contests/joi2017yo/submissions/8812509
// Date: Fri, 06 Dec 2019 13:47:49 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  int ans = C * max(0,(min(B, 0) - A));
  if (A <= 0 && B > 0)ans += D;
  ans += E * max(0,(B - max(A, 0)));
  cout << ans << endl;
}
