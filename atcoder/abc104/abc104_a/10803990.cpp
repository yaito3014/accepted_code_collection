// URL: https://atcoder.jp/contests/abc104/submissions/10803990
// Date: Fri, 13 Mar 2020 14:55:07 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int R;
  cin >> R;
  cout << 'A' << (R<1200?'B':R<2800?'R':'G') << 'C' << endl;
}
