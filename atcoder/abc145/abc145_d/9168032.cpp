// URL: https://atcoder.jp/contests/abc145/submissions/9168032
// Date: Sat, 28 Dec 2019 05:57:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

#include <ostream>

template<size_t Mod = 1000000007, class T = long long int>
struct modint {
  T value;
  constexpr modint() = default;
  constexpr modint(const modint&) = default;
  constexpr modint(modint&&) = default;
  constexpr explicit modint(T value_)
    : value(value_% Mod) {}
  constexpr modint& operator=(modint&) = default;
  constexpr modint& operator=(modint&&) = default;
  constexpr modint& operator=(T rhs);
  constexpr modint& operator+=(const modint& rhs);
  constexpr modint& operator-=(const modint& rhs);
  constexpr modint& operator*=(const modint& rhs);
  constexpr modint& operator %=(T rhs);
  constexpr modint& operator %=(const modint& rhs);
  constexpr modint& operator /=(const modint& rhs);
  constexpr modint inv() const;
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

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator=(T rhs) {
  value = rhs % Mod;
  return *this;
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator+=(const modint<Mod, T>& rhs) {
  value = (value + rhs.value) % Mod;
  return *this;
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator-=(const modint<Mod, T>& rhs) {
  value = (value - rhs.value) % Mod;
  return *this;
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator*=(const modint<Mod, T>& rhs) {
  value = (value * rhs.value) % Mod;
  return *this;
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator %=(T rhs) {
  return (*this %= modint<Mod, T>(rhs));
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator %=(const modint<Mod, T>& rhs) {
  value %= rhs.value;
  return *this;
}

template<size_t Mod, class T>
constexpr modint<Mod, T> modint<Mod, T>::inv() const {
  return modpow<Mod, T>(*this, modint<Mod, T>(Mod - 2));
}

template<size_t Mod, class T>
constexpr modint<Mod, T>& modint<Mod, T>::operator /=(const modint<Mod, T>& rhs) {
  return *this *= rhs.inv();
}

template<size_t Mod, class T>
constexpr modint<Mod, T> operator +(modint<Mod, T> a, const modint<Mod, T>& b) {
  return a += b;
}

template<size_t Mod, class T>
constexpr modint<Mod, T> operator -(modint<Mod, T> a, const modint<Mod, T>& b) {
  return a -= b;
}

template<size_t Mod, class T>
constexpr modint<Mod, T> operator *(modint<Mod, T> a, const modint<Mod, T>& b) {
  return a *= b;
}

template<size_t Mod, class T>
constexpr modint<Mod, T> operator %(modint<Mod, T> a, const modint<Mod, T>& b) {
  return a %= b;
}

template<size_t Mod, class T>
constexpr modint<Mod, T> operator /(modint<Mod, T> lhs, const modint<Mod, T>& rhs) {
  return lhs /= rhs;
}

template<size_t Mod, class T>
std::ostream& operator <<(std::ostream& os, const modint<Mod, T>& rhs) {
  os << rhs.value;
  return os;
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int X, Y;
  cin >> X >> Y;
  if ((X + Y) % 3 || X < (X + Y) / 3 || Y < (X + Y) / 3) {
    cout << 0 << endl;
    return 0;
  }
  vector<modint<>> in(X + Y + 2, modint<>(1));
  for (int i = 0; i < X + Y + 1; ++i)
    in[i + 1] = in[i] * modint<>(i + 1);
  auto combi = [&in](int n, int r) {
    return (in[n] / in[n - r]) / in[r];
  };
  cout << combi((X + Y) / 3, max(X, Y) - (X + Y) / 3) << endl;
}
