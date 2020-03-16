// URL: https://atcoder.jp/contests/abc103/submissions/10946654
// Date: Mon, 16 Mar 2020 14:23:27 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  array<int, 3> A;
  for(auto& e : A)cin >> e;
  sort(begin(A), end(A));
  cout << (A.back() - A.front()) << endl;
}
