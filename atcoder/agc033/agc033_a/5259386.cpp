// URL: https://atcoder.jp/contests/agc033/submissions/5259386
// Date: Sat, 04 May 2019 12:34:29 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

struct Pos {
    int x, y;
    constexpr Pos() : Pos(0, 0) {}
    explicit constexpr Pos(int x, int y) : x(x), y(y) {}
};
constexpr bool operator==(const Pos& a, const Pos& b) { return a.x == b.x && a.y == b.y; }
constexpr bool operator!=(const Pos& a, const Pos& b) { return !(a == b); }
constexpr Pos operator+(const Pos & a, const Pos & b) { return Pos(a.x + b.x, a.y + b.y); }

int main() {

    int H, W;
    std::cin >> H >> W;

    std::queue<Pos> q;
    const std::array<Pos, 4> Dir = { { Pos(0,1),Pos(1,0),Pos(0,-1),Pos(-1,0) } };

    std::vector<std::vector<char>> A(H, std::vector<char>(W));
    for (auto& row : A)for (auto& elem : row)std::cin >> elem;

    std::vector<std::vector<int>> memo(H, std::vector<int>(W, 3000));

    for (int h = 0; h < H; ++h) {
        for (int w = 0; w < W; ++w) {
            if (A[h][w] == '#') {
                memo[h][w] = 0;
                q.emplace(w, h);
            }
        }
    }

    while (!q.empty()) {
        Pos now = q.front();
        q.pop();
        for (auto& dir : Dir) {
            Pos next = now + dir;
            if (next.x < 0 || W <= next.x || next.y < 0 || H <= next.y)continue;
            if (memo[now.y][now.x] + 1 < memo[next.y][next.x]) {
                memo[next.y][next.x] = memo[now.y][now.x] + 1;
                q.push(next);
            }
        }
    }

    int ans = -1;
    for (auto& row : memo)
        for (auto& elem : row)
            ans = std::max(ans, elem);

    std::cout << ans << std::endl;
}
