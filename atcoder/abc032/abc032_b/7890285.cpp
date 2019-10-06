// URL: https://atcoder.jp/contests/abc032/submissions/7890285
// Date: Sun, 06 Oct 2019 14:41:02 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  string s;
  cin >> s;
  int k;
  cin >> k;
  set<string> ans;
  for (int i = 0, len = s.length(); i < len - k + 1; ++i)
    ans.insert(s.substr(i,k));
  cout << ans.size() << endl;
}
