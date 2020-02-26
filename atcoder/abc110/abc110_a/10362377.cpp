// URL: https://atcoder.jp/contests/abc110/submissions/10362377
// Date: Wed, 26 Feb 2020 14:27:15 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	array<int,3> in;
	for(auto&e:in)cin >> e;
	sort(begin(in), end(in));
	int ans = 0;
	do {
		ans = max(ans, in[0] + in[1]*10 + in[2]);
	} while(next_permutation(begin(in), end(in)));
	cout << ans << endl;
}
