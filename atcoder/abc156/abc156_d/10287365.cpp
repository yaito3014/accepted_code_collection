// URL: https://atcoder.jp/contests/abc156/submissions/10287365
// Date: Sat, 22 Feb 2020 13:08:05 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

template<size_t Mod = 1000000007, class T = long long int>
struct modint {
  T value;
  constexpr modint() = default;
  constexpr modint(const modint&) = default;
  constexpr modint(modint&&) = default;
  constexpr modint(T value_) : value(value_% Mod) {}
  constexpr modint& operator=(const modint&) = default;
  constexpr modint& operator=(modint&&) = default;
  constexpr modint& operator+=(const modint& rhs);
  constexpr modint& operator-=(const modint& rhs);
  constexpr modint& operator*=(const modint& rhs);
  constexpr modint& operator %=(T rhs);
  constexpr modint& operator %=(const modint& rhs);
  constexpr modint& operator /=(const modint& rhs);
  constexpr modint inv() const;
  static constexpr size_t MOD = Mod;
  using value_type = T;
};

template<size_t Mod, class T>
constexpr modint<Mod, T> modpow(modint<Mod, T> a, modint<Mod, T> b) {
  modint<Mod, T> res(1);
  while (b.value > 0) {
    if (b.value % 2)res = res * a;
    a = a * a;
    b.value /= 2;
  }
  return res;
}

#define MODINT_ASSIGN_DEF(op) \
template<size_t Mod, class T> \
constexpr modint<Mod, T>& modint<Mod, T>::operator op##=(const modint<Mod, T>& rhs) { value = value op rhs.value; while(value < 0)value += Mod; value %= Mod; return *this; }
MODINT_ASSIGN_DEF(+)
MODINT_ASSIGN_DEF(-)
MODINT_ASSIGN_DEF(*)

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator %=(T rhs) {
  return (*this %= modint<Mod, T>(rhs));
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator %=(const modint<Mod, T>& rhs) {
  value %= rhs.value; return *this;
}

template<size_t Mod, class T>
constexpr modint<Mod, T> modint<Mod, T>::inv() const {
  return modpow<Mod, T>(*this, modint<Mod, T>(Mod - 2));
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator /=(const modint<Mod, T>& rhs) {
  return *this *= rhs.inv();
}

#define MODINT_OP_DEF(op) \
template<size_t Mod, class T> \
constexpr modint<Mod, T> operator op(modint<Mod, T> a, const modint<Mod, T>& b) { return a op##= b; }
MODINT_OP_DEF(+)
MODINT_OP_DEF(-)
MODINT_OP_DEF(*)
MODINT_OP_DEF(/ )
MODINT_OP_DEF(%)


template<size_t Mod, class T>
std::ostream& operator <<(std::ostream& os, const modint<Mod, T>& rhs) {
  os << rhs.value;
  return os;
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  long long int N, A, B;
  cin >> N >> A >> B;
  modint<> factA = 1;
  modint<> factB = 1;
  modint<> factNA = 1;
  modint<> factNB = 1;
  for (int i = 1; i <= A; ++i)factA *= i;
  for (int i = 1; i <= B; ++i)factB *= i;
  for (int i = 0; i < A; ++i)factNA *= (N - i);
  for (int i = 0; i < B; ++i)factNB *= (N - i);
  cout << modpow(modint<>(2), modint<>(N)) - modint<>(1) - (factNA / factA) - (factNB / factB) << endl;
}
