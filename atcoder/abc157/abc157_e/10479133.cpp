// URL: https://atcoder.jp/contests/abc157/submissions/10479133
// Date: Sun, 01 Mar 2020 23:33:54 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

namespace yaito {
  template<class T, class Func>
  class segmentTree {
  private:
    std::vector<T> data;
    size_t height;
    size_t bottom_size;
    Func func;
    T invalid;

    T get(size_t l, size_t r, size_t k, size_t left, size_t right) const {
      if (right <= l || r <= left)return invalid;
      if (l <= left && right <= r)return data[k];
      T a = get(l, r, k * 2 + 1, left, (left + right) / 2);
      T b = get(l, r, k * 2 + 2, (left + right) / 2, right);
      return func(a, b);
    }

  public:
  	segmentTree() = default;
    template<class Iter>
    segmentTree(Iter first, Iter last, Func func, T invalid) : func(func), invalid(invalid) {
      size_t dif = std::distance(first, last);
      bottom_size = 1;
      height = 1;
      while (bottom_size < dif) {
        bottom_size <<= 1;
        ++height;
      }
      data.resize(2 * bottom_size - 1, invalid);
      for (size_t i = 0; i < dif; ++i, ++first)update(i, *first);
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
      return get(l, r, 0, 0, bottom_size);
    }

    void show()const {
      for (size_t i = 0; i < 2 * bottom_size - 1; ++i) {
        std::cout << data[i] << ", ";
        if (!((i + 2) & (i + 1)))std::cout << '\n';
      }
    }

  };

  template<class T, class Iter, class Func>
  auto make_segmentTree(Iter first, Iter last, Func func, T init) {
    return segmentTree<T, Func>(first, last, func, init);
  }

}

ostream& operator<<(ostream& os, const set<char>& s){
	os << '{';
    for(const auto& e : s)os << ' ' << e;
    os << " }";
    return os;
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  string S;
  cin >> S;
  array<yaito::segmentTree<int, plus<>>, 26> trees;
  for(char c = 'a'; c <= 'z'; ++c){
    vector<int> v(N);
    for(int i = 0; i < N; ++i)v[i] = (S[i]==c ? 1 : 0);
    trees[c-'a'] = yaito::make_segmentTree(begin(v),end(v), plus<>{}, 0);
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
      trees[S[i]-'a'].update(i, 0);
      trees[c-'a'].update(i, 1);
      S[i] = c;
    }
    else if (t == 2) {
      int l, r;
      cin >> l >> r;
      --l;
      int ans = 0;
      for(const auto& e : trees)if(e.get(l, r)>0)++ans;
      cout << ans << "\n";
    }
  }
}
