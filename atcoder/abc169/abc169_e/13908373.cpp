// URL: https://atcoder.jp/contests/abc169/submissions/13908373
// Date: Mon, 01 Jun 2020 01:07:26 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; ++i) cin >> A[i] >> B[i];
  sort(begin(A), end(A));
  sort(begin(B), end(B));
  int ans = N % 2 ? B[N / 2] - A[N / 2] + 1
    : (B[N / 2] + B[N / 2 - 1]) - (A[N / 2] + A[N / 2 - 1]) + 1;
  cout << ans << endl;
}
