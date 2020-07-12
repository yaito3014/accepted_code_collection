// URL: https://atcoder.jp/contests/aising2020/submissions/15195030
// Date: Sun, 12 Jul 2020 02:37:44 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  std::string s;
  std::cin >> s;
  std::reverse(begin(s), end(s));
  int p = std::count(cbegin(s), cend(s), '1');
  std::vector<int> m1(N, 1), m2(N, 1);
  for (int i = 0; i < N - 1; ++i) {
    if (p > 1) m1[i + 1] = m1[i] * 2 % (p - 1);
    m2[i + 1] = m2[i] * 2 % (p + 1);
  }
  int b1 = 0, b2 = 0;
  for (int i = 0; i < N; ++i) {
    if (s[i] != '1') continue;
    if (p > 1) b1 = (b1 + m1[i]) % (p - 1);
    b2 = (b2 + m2[i]) % (p + 1);
  }
  std::vector<int> table(N + 1, 0);
  for (int i = 1, x = i; i <= N; x = ++i) do
      ++table[i];
    while (x %= std::bitset<32>(x).count());

  for (int i = 0; i < N; ++i) {
    int ans =
        s[N - i - 1] == '1'
            ? p > 1 ? table[(b1 - m1[N - i - 1] + p - 1) % (p - 1)] : -1
            : table[(b2 + m2[N - i - 1] + p + 1) % (p + 1)];
    std::cout << ++ans << '\n';
  }
}
