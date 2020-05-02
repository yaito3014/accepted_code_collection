// URL: https://atcoder.jp/contests/abc165/submissions/12589616
// Date: Sat, 02 May 2020 12:16:10 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int K, A, B;
  cin >> K >> A >> B;
  for (int i = A; i <= B; ++i) {
    if (i % K)continue;
    cout << "OK" << endl;
    return 0;
  }
  cout << "NG" << endl;
}
