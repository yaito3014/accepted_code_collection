// URL: https://atcoder.jp/contests/abc049/submissions/11330211
// Date: Sun, 29 Mar 2020 02:09:00 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  const string vowel = "aiueo";
  char c;
  cin >> c;
  bool ans = any_of(begin(vowel), end(vowel), [=](char i) { return i == c; });
  cout << (ans ? "vowel" : "consonant") << endl;
}
