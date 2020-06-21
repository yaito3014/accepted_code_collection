// URL: https://atcoder.jp/contests/abc171/submissions/14554310
// Date: Sun, 21 Jun 2020 12:23:13 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  map<long long, int> cnt;
  long long sum = 0;
  for (int i = 0; i < N; ++i) {
    long long A;
    cin >> A;
    ++cnt[A];
    sum += A;
  }
  int Q;
  cin >> Q;
  for (int q = 0; q < Q; ++q) {
    long long B, C;
    cin >> B >> C;
    sum = sum - B * cnt[B] + C * cnt[B];
    cnt[C] += cnt[B];
    cnt[B] = 0;
    cout << sum << '\n';
  }
}
