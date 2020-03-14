// URL: https://atcoder.jp/contests/past201912-open/submissions/10809204
// Date: Sat, 14 Mar 2020 00:51:43 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N, 0));
  for(int i = 0; i < N; ++i) {
    for(int j = i + 1; j < N; ++j) {
      int a;
      cin >> a;
      A[i][j] = A[j][i] = a;
    }
  }
  int ans = INT_MIN;
  stack<pair<int, vector<int>>> s;
  s.emplace(0, vector<int>(N, 0));
  s.emplace(0, vector<int>(N, 1));
  s.emplace(0, vector<int>(N, 2));
  while(!s.empty()) {
    auto p = s.top();
    s.pop();
    if(p.first == N - 1) {
      int res = 0;
      for(int i = 0; i < N; ++i)
        for(int j = i + 1; j < N; ++j)
          if(p.second[i] == p.second[j])res += A[i][j];
      ans = max(ans, res);
      continue;
    }
    ++p.first;
    for(int i = 0; i < 3; ++i) {
      p.second[p.first] = i;
      s.emplace(p);
    }
  }
  cout << ans << endl;
}
