// URL: https://atcoder.jp/contests/joi2012yo/submissions/10209323
// Date: Wed, 19 Feb 2020 07:16:27 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

struct Point{
  int x, y;
  Point() = default;
  constexpr Point(int x_, int y_)
    : x(x_), y(y_) {}
  constexpr Point& operator +=(const Point& rhs){
    x += rhs.x;
    y += rhs.y;
    return *this;
  }
};

constexpr Point operator +(Point lhs, const Point& rhs){
  return lhs += rhs;
}

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int W, H;
  cin >> W >> H;
  vector<vector<bool>> field(H+2, vector<bool>(W+2, false));
  for(int y = 0; y < H; ++y)for(int x = 0; x < W; ++x){
  	bool b;
  	cin >> b;
  	field[y+1][x+1] = b;
  }
  
  constexpr array<Point, 6> EvenDir = {{
    Point{ 0, 1 }, Point{ 0, -1 }, Point{ 1, 0 }, Point{ -1, 0 }, Point{ -1, 1 }, Point{ -1, -1 },
  }};
  constexpr array<Point, 6> OddDir = {{
    Point{ 0, 1 }, Point{ 0, -1 }, Point{ 1, 0 }, Point{ -1, 0 }, Point{ 1, 1 }, Point{ 1, -1 },
  }};
  vector<vector<bool>> visited(H+2, vector<bool>(W+2, false));
  queue<Point> que;
  int ans = 0;
  que.push(Point{ 0, 0 });
  visited[0][0] = true;
  while(!que.empty()){
    Point current = que.front();
    que.pop();
    for(const auto& dir : (current.y%2?OddDir:EvenDir)){
      Point next = current + dir;
      if(next.x<0||W+1<next.x||next.y<0||H+1<next.y)continue;
      if(visited[next.y][next.x])continue;
      if(field[next.y][next.x]){
      	++ans;
      	continue;
      }
      que.push(next);
      visited[next.y][next.x] = true;
    }
  }
  cout << ans << endl;
}
