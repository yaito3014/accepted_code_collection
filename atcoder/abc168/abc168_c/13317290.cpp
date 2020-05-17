// URL: https://atcoder.jp/contests/abc168/submissions/13317290
// Date: Sun, 17 May 2020 12:25:29 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr double PI = 3.14159265358979;
  int A, B, H, M;
  cin >> A >> B >> H >> M;
  int time = H * 60 + M;
  double hour = 360 * time / (12 * 60.);
  double minute = 360 * M / 60.;
  double angle = hour + 360 - minute;
  angle = min(angle, abs(360 - angle));
  double ans = sqrt(A * A + B * B - 2 * A * B * cos(angle * PI / 180));
  cout << fixed << setprecision(10) << ans << endl;
}
