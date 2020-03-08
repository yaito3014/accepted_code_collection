// URL: https://atcoder.jp/contests/abc038/submissions/10662555
// Date: Sun, 08 Mar 2020 08:04:29 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> a(N);
  for (auto& e : a)cin >> e;
  int64_t ans = 0;
  for (int left = 0, right = 0; left < N; ++left) {
    while (right < N && (left == right || a[right - 1] < a[right]))++right;
    ans += (right - left);
    cerr << '[' << left << ", " << right << ") => " << (right - left) << endl;
  }
  cout << ans << endl;
}
