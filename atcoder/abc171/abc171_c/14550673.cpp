// URL: https://atcoder.jp/contests/abc171/submissions/14550673
// Date: Sun, 21 Jun 2020 12:17:41 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long N;
  cin >> N, --N;
  string name;
  for (; N >= 0; --(N /= 26)) name += 'a' + N % 26;
  reverse(begin(name), end(name));
  cout << name << '\n';
}
