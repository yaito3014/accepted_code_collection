// URL: https://atcoder.jp/contests/iroha2019-day2/submissions/5215370
// Date: Wed, 01 May 2019 06:51:43 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

struct Pos {
    int x, y;
    Pos(int x, int y) :x(x), y(y) {}
};
Pos operator+(const Pos& a, const Pos& b) { return Pos(a.x + b.x, a.y + b.y); }

int main() {

    int H, W, X;
    std::cin >> H >> W >> X;
    int sx, sy, gx, gy;
    std::cin >> sx >> sy >> gx >> gy;

    std::vector<std::vector<int>> field(H, std::vector<int>(W));
    for (auto& row : field)for (auto& elem : row)std::cin >> elem;

    std::vector<std::vector<int64_t>> memo(H, std::vector<int64_t>(W, -1));

    std::vector<int64_t> C(X + 1, 0);
    for (int i = 0; i < X; ++i)std::cin >> C[i + 1];

    const std::array<Pos, 4> Dir = { { Pos(0,1),Pos(1,0),Pos(0,-1),Pos(-1,0) } };

    const Pos Start(sy - 1, sx - 1), Goal(gy - 1, gx - 1);

    std::queue<Pos> q;
    memo[Start.y][Start.x] = 0;

    auto debug = [&]() {
        for (auto& row : memo) {
            for (auto& elem : row)std::cout << std::setw(5) << elem << ", ";
            std::cout << std::endl;
        }
        std::cout << std::endl;
    };

    q.push(Start);
    while (!q.empty()) {
        Pos now = q.front();
        q.pop();
        for (auto& dir : Dir) {
            Pos next = now + dir;
            if (next.x < 0 || W <= next.x || next.y < 0 || H <= next.y)continue;
            int64_t next_cost = memo[now.y][now.x];
            if (field[now.y][now.x] != field[next.y][next.x])
                next_cost += C[field[next.y][next.x]];
            if (memo[next.y][next.x] == -1 || memo[next.y][next.x] > next_cost) {
                memo[next.y][next.x] = next_cost;
                q.push(next);
            }
        }

    }
    //debug();
    std::cout << memo[Goal.y][Goal.x] << std::endl;

}
