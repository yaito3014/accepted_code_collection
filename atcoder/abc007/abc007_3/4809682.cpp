// URL: https://atcoder.jp/contests/abc007/submissions/4809682
// Date: Tue, 02 Apr 2019 22:44:36 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

struct Pos {
    int x, y;
    constexpr Pos() :Pos(0, 0) {}
    constexpr Pos(int x, int y) : x(x), y(y) {}
};
constexpr Pos operator+(const Pos& a, const Pos& b) { return Pos(a.x + b.x, a.y + b.y); }
constexpr bool operator==(const Pos & a, const Pos & b) { return a.x == b.x && a.y == b.y; }

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    const int MAX_SIZE = 50;
    int R, C;
    int sx, sy;
    int gx, gy;
    std::array<std::array<char, MAX_SIZE>, MAX_SIZE> field;

    std::cin >> R >> C;
    std::cin >> sy >> sx;
    std::cin >> gy >> gx;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            std::cin >> field[i][j];

    const std::array<Pos, 4> directions = { { {1,0},{0,1},{-1,0},{0,-1} } };
    std::array<std::array<int, MAX_SIZE>, MAX_SIZE> field2;
    for (int r = 0; r < R; ++r)for (int c = 0; c < C; ++c)field2[r][c] = field[r][c] == '#' ? INT_MIN : INT_MAX;
    std::queue<Pos> q;
    Pos goal(gx - 1, gy - 1);
    q.emplace(sx - 1, sy - 1);
    field2[sy - 1][sx - 1] = 0;

    Pos now;
    while (!q.empty()) {
        now = q.front(); q.pop();
        for (const auto& i : directions) {
            Pos next = now + i;
            if (field2[next.y][next.x] > field2[now.y][now.x] + 1) {
                field2[next.y][next.x] = field2[now.y][now.x] + 1;
                q.push(next);
            }
            if (next == goal)goto END_OF_LOOP;
        }
    }
END_OF_LOOP:

    std::cout << field2[gy - 1][gx - 1] << std::endl;
}
