// URL: https://atcoder.jp/contests/abc158/submissions/10603768
// Date: Sat, 07 Mar 2020 12:16:18 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  int Q;
  cin >> S;
  cin >> Q;
  bool rev = false;
  deque<char> que(begin(S),end(S));
  for (int i = 0; i < Q; ++i) {
    int T;
    cin >> T;
    if (T == 1)rev = !rev;
    else if (T == 2) {
      int F;
      char C;
      cin >> F >> C;
      if (rev)F = 3 - F;
      if (F == 1)que.push_front(C);
      else if (F == 2)que.push_back(C);
    }
  }
  if (rev)reverse(begin(que), end(que));
  for (auto& e : que)cout << e;
  cout << endl;
}
