// URL: https://atcoder.jp/contests/abc141/submissions/7521363
// Date: Sun, 15 Sep 2019 12:08:51 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;

int main() {

  string S;
  cin >> S;
  int N = S.size();
  bool ans = true;
  for (int i = 0; i < N; ++i) {
    if (i % 2 == 0 && S[i] == 'L') {
      ans = false;
      break;
    }
    if (i % 2 == 1 && S[i] == 'R') {
      ans = false;
      break;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
}
