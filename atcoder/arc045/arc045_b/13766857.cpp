// URL: https://atcoder.jp/contests/arc045/submissions/13766857
// Date: Sun, 31 May 2020 08:18:18 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

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
  int N, M;
  cin >> N >> M;
  vector<int> rooms(N + 1, 0);
  vector<pair<int, int>> sections(M);
  for (int i = 0; i < M; ++i) {
    int s, t;
    cin >> s >> t, --s;
    sections[i] = make_pair(s, t);
    ++rooms[s];
    --rooms[t];
  }
  constexpr int kInf = INT_MAX;
  partial_sum(cbegin(rooms), cend(rooms), begin(rooms));
  auto tree = yaito::MakeSegmentTree(cbegin(rooms), cend(rooms), kInf,
                                     [](int a, int b) { return min(a, b); });
  deque<int> ans;
  for (int i = 0; i < M; ++i)
    if (tree.Get(sections[i].first, sections[i].second) > 1)
      ans.push_back(i + 1);
  cout << ans.size() << '\n';
  copy(cbegin(ans), cend(ans), ostream_iterator<int>(cout, "\n"));
}
