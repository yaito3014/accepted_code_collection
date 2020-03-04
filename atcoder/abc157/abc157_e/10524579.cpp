// URL: https://atcoder.jp/contests/abc157/submissions/10524579
// Date: Wed, 04 Mar 2020 08:48:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

#pragma once
#include <type_traits>
#include <vector>
namespace yaito {
  template<class T, class Func = T(*)(T, T)>
  class segmentTree {
  private:
    std::vector<T> data;
    size_t height;
    size_t bottom_size;
    T identity;
    Func func;

  public:
    segmentTree() = default;
    segmentTree(size_t N, T identity_, const Func& func_ = Func{})
      : identity(identity_)
      , func(func_)
    {
      bottom_size = 1;
      height = 1;
      while (bottom_size < N) {
        bottom_size <<= 1;
        ++height;
      }
      data.resize(2 * bottom_size - 1, identity);
    }

    template<class Iter>
    segmentTree(Iter first_, Iter last_, T identity_, const Func& func_ = Func{})
      : segmentTree(std::distance(first_, last_), identity_, func_)
    {
      for (size_t i = 0; i < bottom_size; ++i, ++first_)update(i, *first_);
    }

    void update(size_t i, T value) {
      i += bottom_size - 1;
      data[i] = value;
      while (i > 0) {
        i = (i - 1) / 2;
        data[i] = func(data[i * 2 + 1], data[i * 2 + 2]);
      }
    }

    T get(size_t l, size_t r) const {
      T res = identity;
      l += bottom_size - 1;
      r += bottom_size - 1;
      while (l < r) {
        if (l % 2 == 0)res = func(res, data[l++]);
        if (r % 2 == 0)res = func(data[--r], res);
        l = (l - 1) / 2;
        r = (r - 1) / 2;
      }
      return res;
    }

    void show()const {
      for (size_t i = 0; i < 2 * bottom_size - 1; ++i) {
        std::cout << data[i] << ", ";
        if (!((i + 2) & (i + 1)))std::cout << '\n';
      }
    }

  };

  template<class T, class Iter, class Func>
  auto make_segmentTree(Iter&& first, Iter&& last, T&& identity, Func&& func = std::remove_reference_t<Func>{}) {
    return segmentTree<std::remove_reference_t<T>, remove_reference_t<Func>>(
      std::forward<Iter>(first), std::forward<Iter>(last), std::forward<T>(identity), std::forward<Func>(func));
  }

  template<class T, class Func>
  auto make_segmentTree(size_t N, T&& identity, Func&& func = std::remove_reference_t<Func>{}) {
    return segmentTree<std::remove_reference_t<T>, remove_reference_t<Func>>(
      N, std::forward<T>(identity), std::forward<Func>(func));
  }

}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  string S;
  cin >> S;
  array<yaito::segmentTree<int, plus<>>, 26> trees;
  for (char c = 'a'; c <= 'z'; ++c) {
    trees[c - 'a'] = yaito::make_segmentTree(N, 0, plus<>{});
    for (int i = 0; i < N; ++i)trees[c - 'a'].update(i, S[i] == c ? 1 : 0);
  }
  int Q;
  cin >> Q;
  for (int q = 0; q < Q; ++q) {
    int t;
    cin >> t;
    if (t == 1) {
      int i;
      char c;
      cin >> i >> c;
      --i;
      trees[S[i] - 'a'].update(i, 0);
      trees[c - 'a'].update(i, 1);
      S[i] = c;
    }
    else if (t == 2) {
      int l, r;
      cin >> l >> r;
      --l;
      int ans = 0;
      for (const auto& e : trees)if (e.get(l, r) > 0)++ans;
      cout << ans << "\n";
    }
  }
}
