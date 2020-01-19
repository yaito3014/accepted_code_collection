// URL: https://atcoder.jp/contests/abc007/submissions/9595108
// Date: Sun, 19 Jan 2020 10:08:16 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/visitors.hpp>
#include <boost/graph/breadth_first_search.hpp>

using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int R, C;
  cin >> R >> C;
  auto to_index = [&](int x, int y) { return x + y * C; };
  auto to_coord = [&](int index) { return make_pair(index % C, index / C); };
  int sy, sx;
  cin >> sy >> sx;
  int gy, gx;
  cin >> gy >> gx;
  int start = to_index(sx - 1, sy - 1);
  int goal = to_index(gx - 1, gy - 1);
  int N = R * C;
  vector<string> field(R);
  for (auto& row : field)cin >> row;

  boost::adjacency_list<> graph(N);
  boost::vector_property_map<int> distances(N);

  for (int y = 0; y < R; ++y) {
    for (int x = 0; x < C; ++x) {
      int index = to_index(x, y);
      if (y > 0 && field[y - 1][x] == '.')boost::add_edge(index, to_index(x, y - 1), graph);
      if (x > 0 && field[y][x - 1] == '.')boost::add_edge(index, to_index(x - 1, y), graph);
      if (y < R - 1 && field[y + 1][x] == '.')boost::add_edge(index, to_index(x, y + 1), graph);
      if (x < C - 1 && field[y][x + 1] == '.')boost::add_edge(index, to_index(x + 1, y), graph);
    }
  }
  boost::breadth_first_search(graph, start,
    boost::visitor(boost::make_bfs_visitor(boost::record_distances(distances, boost::on_tree_edge()))));
  cout << distances[goal] << endl;
}
