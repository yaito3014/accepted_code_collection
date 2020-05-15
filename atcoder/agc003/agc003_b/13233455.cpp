// URL: https://atcoder.jp/contests/agc003/submissions/13233455
// Date: Fri, 15 May 2020 13:24:20 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  long long ans = 0, sum = 0;
  for (int i = 0; i < N; ++i) {
    if(A[i] != 0)sum += A[i];
    else {
      ans += sum / 2;
      sum = 0;
    }
  }
  ans += sum / 2;
  cout << ans << endl;
}
