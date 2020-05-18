// URL: https://atcoder.jp/contests/apc001/submissions/13374406
// Date: Mon, 18 May 2020 10:19:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  cout << 0 << endl;
  int initial = 0;
  {
    string s;
    cin >> s;
    if (s != "Male") ++initial;
  }
  const array<string, 2> gender = {{"Male", "Female"}};
  int l = 0, r = N;
  while (r - l > 1) {
    int mid = l + (r - l) / 2;
    cout << mid << endl;
    string s;
    cin >> s;
    if (s == "Vacant") break;
    if (s == gender[(initial + mid) % 2])
      l = mid;
    else
      r = mid;
  }
}
