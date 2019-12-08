// URL: https://atcoder.jp/contests/joi2009yo/submissions/8831129
// Date: Sun, 08 Dec 2019 01:10:28 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& v : A)cin >> v;
  vector<int> L(N), R(N + 1);  // [l,r)
  for (int i = 0; i < N; ++i)
    if (i == 0 || A[i - 1] != A[i])L[i] = i;
    else L[i] = L[i - 1];
  for (int i = N - 1; i >= 0; --i)
    if (i == N - 1 || A[i] != A[i + 1])R[i] = i + 1;
    else R[i] = R[i + 1];
  R[N] = N;
  int ans = N;
  for (int i = 0; i < N; ++i) {
    auto change = { A[max(0, i - 1)], A[min(i + 1, N - 1)] };
    for (int color : change) {
      int l = i, r = i + 1;
      int score = 0;
      if (i > 0 && A[i - 1] == color)l = L[l-1];
      if (i < N - 1 && A[i + 1] == color)r = R[r];
      if ((r - l) < 4)continue;
      score += r - l;
      while (l < 0 || r < N) {
        int nl = l, nr = r;
        if (l > 0)nl = L[l - 1];
        if (r < N)nr = R[r];
        if (A[nl] != A[nr - 1])break;
        if ((nr - nl) - (r - l) < 4)break;
        score += (nr - nl) - (r - l);
        l = nl; r = nr;
      }
      ans = min(ans, N - score);
    }
  }
  cout << ans << endl;
}
