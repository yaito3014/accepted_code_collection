// URL: https://atcoder.jp/contests/abc167/submissions/13126183
// Date: Mon, 11 May 2020 12:58:57 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

template <class T, class U>
constexpr T binpow(T a, U b) {
  T res(1);
  while (b > 0) {
    if (b % 2) res = res * a;
    a = a * a;
    b /= 2;
  }
  return res;
}

template <unsigned int Mod = 1000000007, class T = long long int>
struct modint {
  T value;
  constexpr modint() = default;
  constexpr modint(const modint&) = default;
  constexpr modint(modint&&) = default;
  constexpr modint(T value_) : value(value_ % Mod) {}
  constexpr modint& operator=(const modint&) = default;
  constexpr modint& operator=(modint&&) = default;
  constexpr modint& operator+=(const modint& rhs);
  constexpr modint& operator-=(const modint& rhs);
  constexpr modint& operator*=(const modint& rhs);
  constexpr modint& operator%=(T rhs);
  constexpr modint& operator%=(const modint& rhs);
  constexpr modint& operator/=(const modint& rhs);
  constexpr modint inv() const;
  static constexpr unsigned int MOD = Mod;
  using value_type = T;
};

#define MODINT_ASSIGN_DEF(op)                               \
  template <unsigned int Mod, class T>                      \
  constexpr modint<Mod, T>& modint<Mod, T>::operator op##=( \
      const modint<Mod, T>& rhs) {                          \
    value = value op rhs.value;                             \
    while (value < 0) value += Mod;                         \
    value %= Mod;                                           \
    return *this;                                           \
  }
MODINT_ASSIGN_DEF(+)
MODINT_ASSIGN_DEF(-)
MODINT_ASSIGN_DEF(*)
#undef MODINT_ASSIGN_DEF

template <unsigned int Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator%=(T rhs) {
  return (*this %= modint<Mod, T>(rhs));
}

template <unsigned int Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator%=(
    const modint<Mod, T>& rhs) {
  value %= rhs.value;
  return *this;
}

template <unsigned int Mod, class T>
constexpr modint<Mod, T> modint<Mod, T>::inv() const {
  return binpow(*this, Mod - 2);
}

template <unsigned int Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator/=(
    const modint<Mod, T>& rhs) {
  return *this *= rhs.inv();
}

#define MODINT_OP_DEF(op)                                         \
  template <unsigned int Mod, class T>                            \
  constexpr modint<Mod, T> operator op(modint<Mod, T> a,          \
                                       const modint<Mod, T>& b) { \
    return a op## = b;                                            \
  }
MODINT_OP_DEF(+)
MODINT_OP_DEF(-)
MODINT_OP_DEF(*)
MODINT_OP_DEF(/)
MODINT_OP_DEF(%)
#undef MODINT_OP_DEF

template <unsigned int Mod, class T>
std::ostream& operator<<(std::ostream& os, const modint<Mod, T>& rhs) {
  os << rhs.value;
  return os;
}

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using mint = modint<998244353>;
  int N, M, K;
  cin >> N >> M >> K;
  vector<mint> fact(max(N, M), 1);
  for (int i = 0, last = max(N, M) - 1; i < last; ++i)
    fact[i + 1] = fact[i] * mint(i + 1);
  auto comb = [&](int n, int r) { return fact[n] / fact[n - r] / fact[r]; };
  mint ans = 0;
  for (int i = 0; i <= K; ++i)
    ans += binpow<mint>(M - 1, N - i - 1ll) * mint(M) * comb(N - 1, i);
  cout << ans << endl;
}
