// URL: https://atcoder.jp/contests/abc156/submissions/10275110
// Date: Sat, 22 Feb 2020 12:12:09 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> X(N);
  for (auto& e : X)cin >> e;
  int ans = INT_MAX;
  for (int i = 1; i <= 100; ++i) {
    int sum = 0;
    for (auto& e : X)sum += (e - i) * (e - i);
    ans = min(ans, sum);
  }
  cout << ans << endl;
}
