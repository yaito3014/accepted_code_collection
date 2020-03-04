// URL: https://atcoder.jp/contests/abc146/submissions/10521129
// Date: Wed, 04 Mar 2020 05:44:27 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  string S;
  cin >> S;
  vector<int> ans;
  ans.reserve(N);
  int index = N;
  while (index > 0) {
    int m = min(M, index);
    for (; index > m && S[index - m] == '1'; --m);
    if (m == 0) {
      cout << -1 << endl;
      return 0;
    }
    index -= m;
    ans.push_back(m);
  }
  reverse(begin(ans), end(ans));
  for (auto& e : ans)cout << e << " ";
  cout << endl;
}
