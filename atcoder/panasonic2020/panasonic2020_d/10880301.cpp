// URL: https://atcoder.jp/contests/panasonic2020/submissions/10880301
// Date: Sat, 14 Mar 2020 13:19:57 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> str(N, 0), last(N, 0);
  iota(begin(last), end(last), 0);
  for (; str < last; ++str[N - 1]) {
    vector<int> base(N, 2);
    for (int i = 0; i < N - 1; ++i)
      base[i + 1] = max(base[i], str[i] + 2);
    for (int i = N - 1; i >= 0; --i) {
      if (str[i] >= base[i]) {
        str[i] = str[i] - base[i];
        ++str[i - 1];
      }
    }
    for (int i = 0; i < N; ++i)cout << char('a' + str[i]);
    cout << '
';
  }
  for (int i = 0; i < N; ++i)cout << char('a' + str[i]);
  cout << '
';
}
