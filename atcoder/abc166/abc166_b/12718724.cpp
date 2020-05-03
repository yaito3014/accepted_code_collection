// URL: https://atcoder.jp/contests/abc166/submissions/12718724
// Date: Sun, 03 May 2020 12:05:45 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> snukes(N, 0);
  for (int i = 0; i < K; ++i) {
    int d;
    cin >> d;
    for (int j = 0; j < d; ++j) {
      int A;
      cin >> A, --A;
      ++snukes[A];
    }
  }
  cout << count(cbegin(snukes), cend(snukes), 0) << endl;
}
