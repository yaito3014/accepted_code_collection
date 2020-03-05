// URL: https://atcoder.jp/contests/abc105/submissions/10549246
// Date: Thu, 05 Mar 2020 13:41:36 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  cout << (N%K==0?0:1) << endl;
}
