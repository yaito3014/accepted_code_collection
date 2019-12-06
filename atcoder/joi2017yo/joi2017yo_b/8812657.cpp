// URL: https://atcoder.jp/contests/joi2017yo/submissions/8812657
// Date: Fri, 06 Dec 2019 13:57:54 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  int total_cost = 0;
  int max_cost = 0;
  for (int i = 0; i < M; ++i) {
    int A, B;
    cin >> A >> B;
    total_cost += max(0, N - A);
    max_cost = max(max_cost, N - A);
  }
  cout << total_cost - max_cost << endl;
}
