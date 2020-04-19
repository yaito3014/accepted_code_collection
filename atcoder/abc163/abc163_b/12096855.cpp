// URL: https://atcoder.jp/contests/abc163/submissions/12096855
// Date: Sun, 19 Apr 2020 12:08:22 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  for (auto& e : A)cin >> e;
  int sum = accumulate(begin(A), end(A), 0);
  cout << (sum > N ? -1 : N - sum) << endl;
}
