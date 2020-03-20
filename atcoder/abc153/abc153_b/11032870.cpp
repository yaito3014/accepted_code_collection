// URL: https://atcoder.jp/contests/abc153/submissions/11032870
// Date: Fri, 20 Mar 2020 22:36:54 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int H, N;
  cin >> H >> N;
  bool ans = false;
  for (int i = 0; i < N; ++i) {
    int A;
    cin >> A;
    H -= A;
    if(H<=0)ans = true;
  }
  cout << (ans ? "Yes" : "No") << endl;
}
