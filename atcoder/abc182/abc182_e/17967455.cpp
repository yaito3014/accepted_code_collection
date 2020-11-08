// URL: https://atcoder.jp/contests/abc182/submissions/17967455
// Date: Sun, 08 Nov 2020 12:23:55 +0000
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <vector>

int main() {
  int H, W, N, M;
  std::cin >> H >> W >> N >> M;
  enum state : int {
  	ON    = 1 << 0,
    LIGHT = 1 << 1,
    BLOCK = 1 << 2,
  };
  std::vector<std::vector<int>> g(H, std::vector<int>(W, 0));
  for (int i = 0; i < N; ++i) {
    int A, B;
    std::cin >> A >> B, --A, --B;
    g[A][B] |= LIGHT;
  }
  for (int i = 0; i < M; ++i) {
    int C, D;
    std::cin >> C >> D, --C, --D;
    g[C][D] |= BLOCK;
  }
  for (int r = 0; r < H; ++r) {
  	bool flag = false;
    for (int c = 0; c < W; ++c) {
      if (g[r][c] & LIGHT) flag = true;
      if (g[r][c] & BLOCK) flag = false;
      if (flag) g[r][c] |= ON;
    }
  }
  for (int r = 0; r < H; ++r) {
  	bool flag = false;
    for (int c = W - 1; c >= 0; --c) {
      if (g[r][c] & LIGHT) flag = true;
      if (g[r][c] & BLOCK) flag = false;
      if (flag) g[r][c] |= ON;
    }
  }
  for (int c = 0; c < W; ++c) {
  	bool flag = false;
    for (int r = 0; r < H; ++r) {
      if (g[r][c] & LIGHT) flag = true;
      if (g[r][c] & BLOCK) flag = false;
      if (flag) g[r][c] |= ON;
    }
  }
  for (int c = 0; c < W; ++c) {
  	bool flag = false;
    for (int r = H - 1; r >= 0; --r) {
      if (g[r][c] & LIGHT) flag = true;
      if (g[r][c] & BLOCK) flag = false;
      if (flag) g[r][c] |= ON;
    }
  }
  int ans = 0;
  for (int r = 0; r < H; ++r)
    for (int c = 0; c < W; ++c)
      if (g[r][c] & ON) ++ans;
  std::cout << ans << '\n';
}
