// URL: https://atcoder.jp/contests/abc092/submissions/13156525
// Date: Tue, 12 May 2020 13:58:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  cout << (min(A, B) + min(C, D)) << endl;
}
