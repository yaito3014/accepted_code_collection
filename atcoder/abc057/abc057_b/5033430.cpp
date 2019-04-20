// URL: https://atcoder.jp/contests/abc057/submissions/5033430
// Date: Sat, 20 Apr 2019 07:53:11 +0000
// Language: C++14 (GCC 5.4.1)

#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    struct Pos {
        int x, y;
        Pos() : Pos(0, 0) {}
        Pos(int x, int y) : x(x), y(y) {}
    };

    int N, M;
    std::cin >> N >> M;
    std::vector<Pos> students(N);
    std::vector<Pos> checkpoints(M);
    for (auto& i : students)std::cin >> i.x >> i.y;
    for (auto& i : checkpoints)std::cin >> i.x >> i.y;
    for (int i = 0; i < N; ++i) {
        int min = INT_MAX;
        int ans = -1;
        for(int j = 0;j<M;++j){
            int dis = abs(checkpoints[j].x - students[i].x) + abs(checkpoints[j].y - students[i].y);
            if (dis < min) {
                min = dis;
                ans = j + 1;
            }
        }
        std::cout << ans << std::endl;
    }

}
