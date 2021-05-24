// URL: https://atcoder.jp/contests/agc031/submissions/22883951
// Date: Mon, 24 May 2021 02:44:07 +0000
// Language: C++ (GCC 9.2.1)
#include <array>
#include <cstdint>
#include <iostream>
#include <string>
#include <string_view>

int main() {
  using u32 = uint_fast32_t;
  using u64 = uint_fast64_t;
  constexpr std::string_view Alphabets = "abcdefghijklmnopqrstuvwxyz";
  constexpr u32 Mod = 1000000007;
  u32 n;
  std::string s;
  std::cin >> n >> s; 
  std::array<u32, Alphabets.size()> counts = {};
  for (char c : s) ++counts[Alphabets.find(c)];
  u64 res = 1;
  for (u32 c : counts) res = res * (c + 1) % Mod;
  std::cout << --res << '\n';
}
