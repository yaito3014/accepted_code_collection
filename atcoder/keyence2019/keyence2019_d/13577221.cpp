// URL: https://atcoder.jp/contests/keyence2019/submissions/13577221
// Date: Sun, 24 May 2020 13:28:10 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  for (auto& e : A) cin >> e, --e;
  for (auto& e : B) cin >> e, --e;
  sort(begin(A), end(A));
  sort(begin(B), end(B));
  if (unique(begin(A), end(A)) != end(A) ||
        unique(begin(B), end(B)) != end(B)) {
    cout << "0\n";
    return 0;
  }
  vector<int> count_A(N * M + 1, 0), count_B(N * M + 1, 0);
  for (const auto& e : A) ++count_A[e];
  for (const auto& e : B) ++count_B[e];
  partial_sum(crbegin(count_A), crend(count_A), rbegin(count_A));
  partial_sum(crbegin(count_B), crend(count_B), rbegin(count_B));
  constexpr int kMod = 1000000007;
  long long ans = 1;
  for (int i = N * M; i > 0;) {
  	--i;
  	int a = count_A[i] - count_A[i + 1];
  	int b = count_B[i] - count_B[i + 1];
  	if (a && !b) ans = ans * count_B[i] % kMod;
  	else if (!a && b) ans = ans * count_A[i] % kMod;
  	else if (!a && !b) {
  		int p = count_A[i] * count_B[i] - (N * M - i - 1);
  		ans = ans * p % kMod;
  	}
  }
  cout << ans << endl;
}
