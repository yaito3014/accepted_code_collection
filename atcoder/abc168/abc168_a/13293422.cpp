// URL: https://atcoder.jp/contests/abc168/submissions/13293422
// Date: Sun, 17 May 2020 12:03:03 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  string ans;
  switch (N % 10) {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
      ans = "hon";
      break;
    case 0:
    case 1:
    case 6:
    case 8:
      ans = "pon";
      break;
    case 3:
      ans = "bon";
      break;
    default:
      ans = "nope";
  }
  cout << ans << endl;
}
