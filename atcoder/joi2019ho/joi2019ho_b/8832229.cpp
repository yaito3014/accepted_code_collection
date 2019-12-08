// URL: https://atcoder.jp/contests/joi2019ho/submissions/8832229
// Date: Sun, 08 Dec 2019 02:59:09 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  struct Pic {
    int size, value;
    Pic() = default;
    Pic(int size_, int value_)
      : size(size_), value(value_) {}
  };
  auto comp = [](const Pic& lhs, const Pic& rhs) {
    return tie(lhs.value, lhs.size) < tie(rhs.value, rhs.size);
  };
  vector<Pic> pics(N);
  for (auto& v : pics)cin >> v.size >> v.value;
  sort(rbegin(pics), rend(pics), comp);
  vector<int> C(M);
  for (auto& v : C)cin >> v;
  sort(rbegin(C), rend(C));
  int ans = 0;
  auto iter = pics.begin(), end = pics.end();
  for (int i = 0; i < M; ++i) {
    for (; iter != end && iter->size > C[i]; ++iter);
    if (iter == end)break;
    ++ans;
    if (++iter == end)break;
  }
  cout << ans << endl;
}
