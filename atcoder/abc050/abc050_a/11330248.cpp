// URL: https://atcoder.jp/contests/abc050/submissions/11330248
// Date: Sun, 29 Mar 2020 02:11:03 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B;
  char op;
  cin >> A >> op >> B;
  cout << (op == '+' ? A + B : A - B) << endl;
}
