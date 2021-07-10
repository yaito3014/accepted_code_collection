// URL: https://codeforces.com/contest/1547/submission/122011973
// Date: Sat, 10 Jul 2021 18:16:02 +0000
// Language: GNU C++17 (64)
// code from ageprocpp
#line 2 "library/other/template.hpp"
#define _CRT_SECURE_NO_WARNINGS
#ifndef __clang__
#ifdef ONLINE_JUDGE
//#pragma GCC target("avx512f")
#elif defined EVAL
#else
#pragma GCC target("avx2")
#endif
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#endif
#include <string.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define REP(i, n) for (int i = 1; i <= int(n); i++)
#define all(V) V.begin(), V.end()

using i128 = __int128_t;
using u128 = __uint128_t;
using uint = unsigned int;
using lint = long long;
using ulint = unsigned long long;
using IP = std::pair<int, int>;
using LP = std::pair<lint, lint>;

constexpr int INF = INT_MAX / 2;
constexpr lint LINF = LLONG_MAX / 2;
constexpr double eps = DBL_EPSILON * 10;
constexpr double PI = 3.141592653589793238462643383279;

template <class T>
class prique : public std::priority_queue<T, std::vector<T>, std::greater<T>> {
};
int popcount(uint x) {
#if __cplusplus >= 202002L
	return std::popcount(x);
#else
#ifndef __clang__
	return __builtin_popcount(x);
#endif
#endif
	x = (x & 0x55555555) + (x >> 1 & 0x55555555);
	x = (x & 0x33333333) + (x >> 2 & 0x33333333);
	x = (x & 0x0f0f0f0f) + (x >> 4 & 0x0f0f0f0f);
	x = (x & 0x00ff00ff) + (x >> 8 & 0x00ff00ff);
	return (x & 0x0000ffff) + (x >> 16 & 0x0000ffff);
}
template <class F>
inline constexpr decltype(auto) lambda_fix(F&& f) {
	return [f = std::forward<F>(f)](auto&&... args) {
		return f(f, std::forward<decltype(args)>(args)...);
	};
}
template <class T>
constexpr std::vector<T> make_vec(size_t n) {
	return std::vector<T>(n);
}
template <class T, class... Args>
constexpr auto make_vec(size_t n, Args&&... args) {
	return std::vector<decltype(make_vec<T>(args...))>(
		n, make_vec<T>(std::forward<Args>(args)...));
}
template <class T, class U>
std::istream& operator>>(std::istream& ist, std::pair<T, U>& x) {
	return ist >> x.first >> x.second;
}
template <class T, class U>
std::ostream& operator<<(std::ostream& ost, const std::pair<T, U>& x) {
	return ost << x.first << " " << x.second;
}
template <class T, class U>
constexpr inline bool chmax(T& lhs, const U& rhs) noexcept {
	if (lhs < rhs) {
		lhs = rhs;
		return true;
	}
	return false;
}
template <class T, class U>
constexpr inline bool chmin(T& lhs, const U& rhs) noexcept {
	if (lhs > rhs) {
		lhs = rhs;
		return true;
	}
	return false;
}
constexpr inline lint gcd(lint a, lint b) noexcept {
	while (b) {
		lint c = a;
		a = b;
		b = c % b;
	}
	return a;
}
inline lint lcm(lint a, lint b) noexcept { return a / gcd(a, b) * b; }
constexpr bool isprime(lint n) noexcept {
	if (n == 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
template <class T>
constexpr T mypow(T a, lint b) noexcept {
	T res(1);
	while (true) {
		if (b & 1) res *= a;
		b >>= 1;
		if (!b) break;
		a *= a;
	}
	return res;
}
constexpr lint modpow(lint a, lint b, lint m) noexcept {
	a %= m;
	lint res(1);
	while (b) {
		if (b & 1) {
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b >>= 1;
	}
	return res;
}
template <class T>
constexpr void printArray(const std::vector<T>& vec, char split = ' ') {
	rep(i, vec.size()) {
		std::cout << vec[i];
		std::cout << (i == (int)vec.size() - 1 ? '\n' : split);
	}
}
template <class InputIter>
constexpr void printArray(InputIter l, InputIter r, char split = ' ') {
	auto rprev = std::prev(r);
	for (auto i = l; i != r; i++) {
		std::cout << *i;
		std::cout << (i == rprev ? '\n' : split);
	}
}
LP extGcd(lint a, lint b) noexcept {
	if (b == 0) return {1, 0};
	LP s = extGcd(b, a % b);
	std::swap(s.first, s.second);
	s.second -= a / b * s.first;
	return s;
}
LP ChineseRem(const lint& b1, const lint& m1, const lint& b2,
			  const lint& m2) noexcept {
	auto p = extGcd(m1, m2);
	lint g = gcd(m1, m2), l = m1 / g * m2;
	lint tmp = (b2 - b1) / g * p.first % (m2 / g);
	lint r = (b1 + m1 * tmp + l) % l;
	return {r, l};
}
int LCS(const std::string& a, const std::string& b) {
	auto dp = make_vec<int>(a.size() + 1, b.size() + 1);
	rep(i, a.size()) {
		rep(j, b.size()) {
			chmax(dp[i + 1][j], dp[i][j]);
			chmax(dp[i][j + 1], dp[i][j]);
			if (a[i] == b[j]) chmax(dp[i + 1][j + 1], dp[i][j] + 1);
		}
		chmax(dp[i + 1][b.size()], dp[i][b.size()]);
	}
	rep(j, b.size()) chmax(dp[a.size()][j + 1], dp[a.size()][j]);
	return dp[a.size()][b.size()];
}
template <class T, std::enable_if_t<std::is_convertible<int, T>::value,
									std::nullptr_t> = nullptr>
void compress(std::vector<T>& vec) {
	auto tmp = vec;
	std::sort(all(tmp));
	tmp.erase(std::unique(all(tmp)), tmp.end());
	for (T& i : vec) i = std::lower_bound(all(tmp), i) - tmp.begin();
}
template <class T>
void compress(T* l, T* r) {
	std::vector<T> tmp(l, r);
	std::sort(all(tmp));
	tmp.erase(std::unique(all(tmp)), tmp.end());
	for (auto i = l; i < r; i++) {
		*i = std::lower_bound(all(tmp), *i) - tmp.begin();
	}
}
template <class InputIter>
void compress(InputIter l, InputIter r) {
	std::vector<typename InputIter::value_type> tmp(l, r);
	std::sort(all(tmp));
	tmp.erase(std::unique(all(tmp)), tmp.end());
	for (auto i = l; i < r; i++) {
		*i = std::lower_bound(all(tmp), *i) - tmp.begin();
	}
}
#line 3 "library/data-structure/SegTree.hpp"
template <class T, T (*nodef)(const T&, const T&)>
class SegTree {
  protected:
	unsigned int n = 1, rank = 0;
	std::vector<T> node;
	T ident;

  public:
	SegTree(T e_) : ident(e_) {}
	SegTree(unsigned int m, T e_) : ident(e_) {
		while (n < m) {
			n *= 2;
			rank++;
		}
		node.resize(2 * n, ident);
	}
	SegTree(unsigned int m, T init, T e_) : ident(e_) {
		while (n < m) {
			n *= 2;
			rank++;
		}
		node.resize(2 * n, ident);
		for (unsigned int i = n; i < 2 * n; i++) node[i] = init;
		for (unsigned int i = n - 1; i > 0; i--)
			node[i] = nodef(node[i << 1], node[i << 1 | 1]);
	}
	template <class U>
	SegTree(const std::vector<U>& initvec, T e_) : ident(e_) {
		unsigned int m = initvec.size();
		while (n < m) {
			n *= 2;
			rank++;
		}
		node.resize(2 * n, ident);
		for (unsigned int i = n; i < 2 * n; i++) {
			if (i - n < m) node[i] = initvec[i - n];
		}
		for (unsigned int i = n - 1; i > 0; i--)
			node[i] = nodef(node[i << 1], node[i << 1 | 1]);
	}
	void update(int i, T x) {
		i += n;
		node[i] = x;
		while (i != 1) {
			i >>= 1;
			node[i] = nodef(node[2 * i], node[2 * i + 1]);
		}
	}
	T query(int l, int r) const {
		l += n;
		r += n;
		T ls = ident, rs = ident;
		while (l < r) {
			if (l & 1) ls = nodef(ls, node[l++]);
			if (r & 1) rs = nodef(node[--r], rs);
			l >>= 1;
			r >>= 1;
		}
		return nodef(ls, rs);
	}
	const T& operator[](const int& x) const { return node[n + x]; }
	T queryForAll() const { return node[1]; }

  private:
	template <class F>
	int max_right(int st, F& check, T& acc, int k, int l, int r) const {
		if (l + 1 == r) {
			acc = nodef(acc, node[k]);
			return check(acc) ? -1 : k - n;
		}
		int m = (l + r) >> 1;
		if (m <= st) return max_right(st, check, acc, (k << 1) | 1, m, r);
		if (st <= l && check(nodef(acc, node[k]))) {
			acc = nodef(acc, node[k]);
			return -1;
		}
		int vl = max_right(st, check, acc, k << 1, l, m);
		if (vl != -1) return vl;
		return max_right(st, check, acc, (k << 1) | 1, m, r);
	}

  public:
	template <class F>
	int max_right(int st, F check) const {
		T acc = ident;
		return max_right(st, check, acc, 1, 0, n);
	}
	template <bool (*check)(const T&)>
	int max_right(int st) const {
		T acc = ident;
		return max_right(st, check, acc, 1, 0, n);
	}
};
namespace {
	lint RSQ_nodef(const lint& lhs, const lint& rhs) { return lhs + rhs; }
	lint RMiQ_nodef(const lint& lhs, const lint& rhs) {
		return std::min(lhs, rhs);
	}
	lint RMaQ_nodef(const lint& lhs, const lint& rhs) {
		return std::max(lhs, rhs);
	}
}  // namespace

class RSQ : public SegTree<lint, RSQ_nodef> {
	using Base = SegTree<lint, RSQ_nodef>;

  public:
	template <class... Args>
	RSQ(Args&&... args) : Base(std::forward<Args>(args)..., 0) {}
};
class RMiQ : public SegTree<lint, RMiQ_nodef> {
	using Base = SegTree<lint, RMiQ_nodef>;

  public:
	template <class... Args>
	RMiQ(Args&&... args) : Base(std::forward<Args>(args)..., LINF) {}
};
class RMaQ : public SegTree<lint, RMaQ_nodef> {
	using Base = SegTree<lint, RMaQ_nodef>;

  public:
	template <class... Args>
	RMaQ(Args&&... args) : Base(std::forward<Args>(args)..., -LINF) {}
};

/**
 * @title Segment Tree
 */
#line 3 "main.cpp"

int nodef(const int& lhs, const int& rhs) { return gcd(lhs, rhs); }

class Seg : public SegTree<int, nodef> {
	using Base = SegTree<int, nodef>;

  public:
	template <class... Args>
	Seg(Args&&... args) : Base(std::forward<Args>(args)..., 0) {}
};
int main() {
	int T;
	std::cin >> T;
	while (T--) {
		int N;
		std::cin >> N;
		std::vector<int> a(N);
		rep(i, N) std::cin >> a[i];
		int all_gcd = a[0];
		REP(i, N - 1) all_gcd = gcd(all_gcd, a[i]);
		Seg st(a);
		int ans = 0;
		rep(i, N) {
			int min = 0, max = N;
			while (min + 1 < max) {
				int mid = (min + max) / 2;
				int r = st.query(i, std::min(N, i + mid));
				if (N < i + mid) r = gcd(r, st.query(0, i + mid - N));
				if (r == all_gcd)
					max = mid;
				else
					min = mid;
				if (max <= ans) break;
			}
			chmax(ans, max);
		}
		std::cout << ans - 1 << std::endl;
	}
	return 0;
}
