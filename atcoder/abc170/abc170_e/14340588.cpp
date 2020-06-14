// URL: https://atcoder.jp/contests/abc170/submissions/14340588
// Date: Sun, 14 Jun 2020 13:07:40 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

#include <type_traits>
#include <vector>
namespace yaito {
template <class T, class Func>
class SegmentTree {
 private:
  std::vector<T> data;
  size_t height;
  size_t bottom_size;
  T identity;
  Func func;

 public:
  SegmentTree() = default;
  SegmentTree(size_t N, T identity_, const Func& func_ = Func{})
      : identity(identity_), func(func_) {
    bottom_size = 1;
    height = 1;
    while (bottom_size < N) {
      bottom_size <<= 1;
      ++height;
    }
    data.resize(2 * bottom_size - 1, identity);
  }

  template <class Iter>
  SegmentTree(Iter first_, Iter last_, T identity_, const Func& func_ = Func{})
      : SegmentTree(std::distance(first_, last_), identity_, func_) {
    using difference_type =
        typename std::iterator_traits<Iter>::difference_type;
    difference_type n = std::distance(first_, last_);
    for (difference_type i = 0; i < n; ++i) Update(i, *first_++);
  }

  void Update(size_t i, const T& value) {
    i += bottom_size - 1;
    data[i] = value;
    while (i > 0) {
      i = (i - 1) / 2;
      data[i] = func(data[i * 2 + 1], data[i * 2 + 2]);
    }
  }

  T Get(size_t l, size_t r) const {
    T res = identity;
    l += bottom_size - 1;
    r += bottom_size - 1;
    while (l < r) {
      if (l % 2 == 0) res = func(res, data[l++]);
      if (r % 2 == 0) res = func(data[--r], res);
      l = (l - 1) / 2;
      r = (r - 1) / 2;
    }
    return res;
  }

  void Show() const {
    for (size_t i = 0; i < 2 * bottom_size - 1; ++i) {
      std::cout << data[i] << ", ";
      if (!((i + 2) & (i + 1))) std::cout << '\n';
    }
  }
};

template <class T, class Iter, class Func>
auto MakeSegmentTree(
    Iter first, Iter last, T&& identity,
    Func&& func = typename std::remove_reference<Func>::type{}) {
  using value_type = typename std::remove_cv<
      typename std::iterator_traits<Iter>::value_type>::type;
  static_assert(std::is_convertible<T, value_type>::value,
                "Type doesn't match");
  return SegmentTree<value_type, typename std::remove_reference<Func>::type>(
      first, last, std::forward<T>(identity), std::forward<Func>(func));
}

template <class T, class Func>
auto MakeSegmentTree(
    size_t N, T&& identity,
    Func&& func = typename std::remove_reference<Func>::type{}) {
  using value_type =
      typename std::remove_cv<typename std::remove_reference<T>::type>::type;
  return SegmentTree<value_type, typename std::remove_reference<Func>::type>(
      N, std::forward<T>(identity), std::forward<Func>(func));
}

}  // namespace yaito

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; ++i) cin >> A[i] >> B[i], --B[i];
  constexpr std::size_t kSchoolNum = 200000;
  constexpr int kInf = INT_MAX;
  auto tree = yaito::MakeSegmentTree(kSchoolNum, kInf,
                                     [](int a, int b) { return min(a, b); });
  auto cmp = [&](int a, int b) { return A[a] > A[b]; };
  using set_t = set<int, decltype(cmp)>;
  vector<set_t> schools(kSchoolNum, set_t{cmp});
  for (int i = 0; i < N; ++i) schools[B[i]].insert(i);
  for (std::size_t i = 0; i < kSchoolNum; ++i)
    if (!schools[i].empty()) tree.Update(i, A[*schools[i].begin()]);
  for (int q = 0; q < Q; ++q) {
    int C, D;
    cin >> C >> D, --C, --D;
    schools[B[C]].erase(C);
    tree.Update(B[C], schools[B[C]].empty() ? kInf : A[*schools[B[C]].begin()]);
    schools[D].insert(C);
    tree.Update(D, A[*schools[D].begin()]);
    B[C] = D;
    cout << tree.Get(0, kSchoolNum) << '\n';
  }
}
