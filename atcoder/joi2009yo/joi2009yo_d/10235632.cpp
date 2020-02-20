// URL: https://atcoder.jp/contests/joi2009yo/submissions/10235632
// Date: Thu, 20 Feb 2020 22:31:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

struct Point{
  int x, y;
  Point() = default;
  constexpr Point(int x_, int y_)
    : x(x_), y(y_) {}
  constexpr Point& operator+=(const Point& rhs){
    x += rhs.x;
    y += rhs.y;
    return *this;
  }
};

constexpr Point operator+(Point lhs, const Point& rhs){
  return lhs += rhs;
}

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int m, n;
  cin >> m >> n;
  vector<vector<int>> field(n, vector<int>(m, 0));
  for(auto&row:field)for(auto&elem:row)cin >> elem;
  
  const array<Point, 4> Dirs = {{
    Point{ 0, 1 }, Point{ 0, -1 },
    Point{ 1, 0 }, Point{ -1, 0 },
  }};
  vector<vector<bool>> visited(n, vector<bool>(m, false));
  int ans = 0;
  auto dfs = [](auto&&f){
    return [=](auto&&...args){
      return f(f, forward<decltype(args)>(args)...);
    };
  }([&](auto&&self, Point now, int len)->void{
  	bool last = true;
  	visited[now.y][now.x] = true;
    for(const auto& dir : Dirs){
    	Point next = now + dir;
    	if(next.x<0||m<=next.x||next.y<0||n<=next.y)continue;
    	if(visited[next.y][next.x])continue;
    	if(field[next.y][next.x]==0)continue;
    	last = false;
    	self(self, next, len + 1);
    }
    visited[now.y][now.x] = false;
    if(last)ans = max(ans, len);
  });
  for(int y = 0; y < n; ++y){
    for(int x = 0; x < m; ++x){
      if(field[y][x])dfs(Point{ x, y }, 1);
    }
  }
  cout << ans << endl;
}
