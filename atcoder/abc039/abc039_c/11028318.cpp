// URL: https://atcoder.jp/contests/abc039/submissions/11028318
// Date: Fri, 20 Mar 2020 14:26:10 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string keyboard = "WBWBWWBWBWBW";
  const array<char[3], 7> notes = { { "Do", "Re", "Mi", "Fa", "So", "La", "Si" } };
  string S;
  cin >> S;
  int ans = 0;
  while (S.substr(0, 12) != keyboard)
    rotate(begin(keyboard), next(begin(keyboard), keyboard.find('W', 1)), end(keyboard)), ++ans;
  cout << notes[ans % 7] << endl;
}
