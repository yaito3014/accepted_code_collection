// URL: https://atcoder.jp/contests/rcl-contest-2020-qual/submissions/10104074
// Date: Sat, 15 Feb 2020 10:38:27 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

struct Mino{
	int c, v;
	Mino() = default;
	Mino(int c_, int v_)
		: c(c_), v(v_) {}
};

int main(){
	int N, W, K, V;
	cin >> N >> W >> K >> V;
	vector<Mino> minos(N);
	for(auto&e:minos)cin >> e.c >> e.v;
	for(int i=0;i<N;++i)
		cout << (i%W) << "\n";
}
