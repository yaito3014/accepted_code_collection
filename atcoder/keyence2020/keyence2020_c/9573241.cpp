// URL: https://atcoder.jp/contests/keyence2020/submissions/9573241
// Date: Sat, 18 Jan 2020 12:50:51 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  const int MAX = 1e9;
  int N, K, S;
  cin >> N >> K >> S;
  int fill = (N - K > S ? MAX : 1 );
  for (int i = 0; i < N; ++i)
    cout << (i < K ? S : fill) << " ";
  cout << endl;
}
