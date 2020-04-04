// URL: https://atcoder.jp/contests/abc161/submissions/11535463
// Date: Sat, 04 Apr 2020 13:06:20 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

void next(string& s, int pos = 0) {
  if (pos == s.length()) {
    s.push_back('1');
    return;
  }
  if (s[pos] != '9' && (pos + 1 == s.length() || s[pos] <= s[pos + 1]))++s[pos];
  else {
    next(s, pos + 1);
    for (int i = pos; i >= 0; --i)
      s[i] = max(+'0', s[i + 1] - 1);
  }
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int K;
  cin >> K;
  string ans = "0";
  for (int i = 0; i < K; ++i)next(ans);
  reverse(begin(ans), end(ans));
  cout << ans << endl;
}
