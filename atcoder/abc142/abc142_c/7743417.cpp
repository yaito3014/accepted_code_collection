// URL: https://atcoder.jp/contests/abc142/submissions/7743417
// Date: Sat, 28 Sep 2019 12:09:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i].first;
    A[i].second = i + 1;
  }
  sort(begin(A), end(A));
  for (auto& v : A)
    cout << v.second << " ";
  cout << endl;
}
