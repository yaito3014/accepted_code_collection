// URL: https://atcoder.jp/contests/arc074/submissions/12020163
// Date: Fri, 17 Apr 2020 18:08:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int64_t H, W;
	cin >> H >> W;
	int64_t ans = INT64_MAX;
	auto diff = [](initializer_list<int64_t> l){
		return max(l) - min(l);
	};
	auto calc = [&]() {
		for(int i = 0; i < H; ++i) {
			if(W % 2 != 0 && (H - i) % 2 != 0) {
				ans = min(ans, diff({i * W, (H - i) / 2 * W, (H - i) / 2 * W + W}));
				ans = min(ans, diff({i * W, W / 2 * (H - i), (W / 2 + 1) * (H - i)}));
			} else ans = min(ans, diff({i * W, W * (H - i) / 2}));
		}
	};
	calc();
	swap(W, H);
	calc();
	cout << ans << endl;
}
