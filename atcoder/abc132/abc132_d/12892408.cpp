// URL: https://atcoder.jp/contests/abc132/submissions/12892408
// Date: Wed, 06 May 2020 09:30:03 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr int MOD = 1000000007;
  auto mod_pow = [&](long long int a, int n) -> int {
    long long int res = 1;
    for (; n > 0; n /= 2) {
      if (n % 2)
        res = res * a % MOD;
      a = a * a % MOD;
    }
    return res;
  };
  auto mod_inverse = [&](int n) -> int { return mod_pow(n, MOD - 2); };

  int N, K;
  cin >> N >> K;

  vector<long long> mod_factorials(N + 1, 1);
  for (int i = 0; i < N; ++i)
    mod_factorials[i + 1] = mod_factorials[i] * (i + 1) % MOD;
  auto mod_combination = [&](int n, int r) -> long long {
    return mod_factorials[n] *
           mod_inverse(mod_factorials[n - r] * mod_factorials[r] % MOD) % MOD;
  };
  for (int i = 1; i <= K; ++i) {
    cout << (i <= N - K + 1 ? mod_combination(N - K + 1, i) *
                                  mod_combination(K - 1, i - 1) % MOD
                            : 0)
         << '\n';
  }
}
