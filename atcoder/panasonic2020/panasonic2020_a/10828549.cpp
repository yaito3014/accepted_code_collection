// URL: https://atcoder.jp/contests/panasonic2020/submissions/10828549
// Date: Sat, 14 Mar 2020 12:02:34 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  const array<int, 32> arr = { 1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51 };
  int K;
  cin >> K, --K;
  cout << arr[K] << endl;
}
