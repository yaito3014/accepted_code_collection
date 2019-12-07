// URL: https://atcoder.jp/contests/joi2007yo/submissions/8826187
// Date: Sat, 07 Dec 2019 13:12:34 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  vector<vector<int>> field(b, vector<int>(a, 0));
  field[0][0] = 1;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    field[y][x] = -1;
  }
  for (int y = 0; y < b; ++y) {
    for (int x = 0; x < a; ++x) {
      if (field[y][x] == -1)continue;
      if(x>0)field[y][x] += max(0, field[y][x - 1]);
      if(y>0)field[y][x] += max(0, field[y - 1][x]);
    }
  }
  cout << field[b - 1][a - 1] << endl;
}
