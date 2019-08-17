// URL: https://atcoder.jp/contests/abc031/submissions/6952731
// Date: Sat, 17 Aug 2019 10:10:10 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> a(N);
  int ans = INT_MIN;
  for (auto& v : a)cin >> v;
  for (int i = 0; i < N; ++i) {
    int takahashi_res = INT_MIN;
    int aoki_max = INT_MIN;
    for (int j = 0; j < N; ++j) {
      if (i == j)continue;
      int takahashi = 0;
      int aoki = 0;
      int low = i, high = j;
      if (high < low)swap(low, high);
      int n = high - low + 1;
      for (int k = 0; k < n; ++k) {
        if ((k + 1) % 2)takahashi += a[low + k];
        else aoki += a[low + k];
      }
      if (aoki_max < aoki) {
        aoki_max = aoki;
        takahashi_res = takahashi;
      }
    }
    ans = max(ans, takahashi_res);
  }
  cout << ans << endl;
}
