// URL: https://atcoder.jp/contests/abc158/submissions/10593401
// Date: Sat, 07 Mar 2020 12:05:07 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int64_t N, A, B;
  cin >> N >> A >> B;
  cout << (N / (A + B) * A + min(N % (A + B), A)) << endl;
}
