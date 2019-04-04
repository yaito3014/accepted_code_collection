// URL: https://atcoder.jp/contests/abc007/submissions/4824610
// Date: Thu, 04 Apr 2019 13:20:18 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

//座標格納用のstructと演算子のオーバーロード
//なんとなくconstexprつけとく
struct Pos {
    int x, y;
    constexpr Pos() :Pos(0, 0) {}
    constexpr Pos(int x, int y) : x(x), y(y) {}
};
constexpr Pos operator+(const Pos& a, const Pos& b) { return Pos(a.x + b.x, a.y + b.y); }
constexpr bool operator==(const Pos & a, const Pos & b) { return a.x == b.x && a.y == b.y; }

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);//おなじみのcin高速化
    const int MAX_SIZE = 50;                                //1≦R,C≦50 なので固定値にしておく
    std::array<std::array<char, MAX_SIZE>, MAX_SIZE> field;//マップの格納用array

    //変数たち
    int R, C;
    int sx, sy;
    int gx, gy;

    //読み込み
    std::cin >> R >> C;
    std::cin >> sy >> sx;
    std::cin >> gy >> gx;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            std::cin >> field[i][j];

    const std::array<Pos, 4> directions = { { {1,0},{0,1},{-1,0},{0,-1} } };        //方向たち
    std::array<std::array<int, MAX_SIZE>, MAX_SIZE> field2;                         //メモ
    for (int r = 0; r < R; ++r)for (int c = 0; c < C; ++c)field2[r][c] = -1;        //未探索なら-1で初期化しておく

    //探索用のキュー
    std::queue<Pos> q;

    //スタートとゴールを共にPosにしておく
    Pos start(sy - 1, sx - 1);
    Pos goal(gx - 1, gy - 1);

    q.push(start);//探索開始位置
    field2[start.y][start.x] = 0;//探索済み。距離は0

    while (!q.empty()) {
        Pos now = q.front(); q.pop();
        for (const auto& i : directions) {//すべての方向に対して
            Pos next = now + i;
            if (field[next.y][next.x] != '#' && field2[next.y][next.x] == -1) { //壁でなく未探索なら
                field2[next.y][next.x] = field2[now.y][now.x] + 1;              //距離を入れる
                q.push(next);                                                   //探索継続
            }
            //ゴールに到達したら終了。二重ループから抜け出す
            if (next == goal)goto END_OF_LOOP;
        }
    }
END_OF_LOOP:
    //出力
    std::cout << field2[goal.y][goal.x] << std::endl;
}
