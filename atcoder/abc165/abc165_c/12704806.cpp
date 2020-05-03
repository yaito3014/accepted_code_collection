// URL: https://atcoder.jp/contests/abc165/submissions/12704806
// Date: Sun, 03 May 2020 11:38:37 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <boost/preprocessor.hpp>

#define repi(i, f, l) \
  for(int (i) = (f); (i) <= (l) ; ++(i))
#define MAKE_I(num) BOOST_PP_CAT(i, num)
#define MAKE_FOR(z, n, data) \
  repi( \
    MAKE_I(n), \
    BOOST_PP_IF( \
      BOOST_PP_EQUAL(0, n), \
      BOOST_PP_TUPLE_ELEM(0, data), \
      MAKE_I(BOOST_PP_DEC(n)) \
    ), \
    BOOST_PP_TUPLE_ELEM(1, data) \
  )
#define EXPAND(z, n, data) \
	MAKE_I(n),
int main() {
	using namespace std;
	using Ti4 = tuple<int, int, int, int>;
  int N, M, Q;
  cin >> N >> M >> Q;
  vector<Ti4> abcd(Q);
  for(auto& [a, b, c, d] : abcd)
  	cin >> a >> b >> c >> d, --a, --b;
  int ans = 0;
  BOOST_PP_REPEAT(10, MAKE_FOR, (1, M)) {
  	vector<int> arr = { BOOST_PP_REPEAT(10, EXPAND, 0) };
  	int sum = 0;
  	for(auto& [a, b, c, d] : abcd)
  		if(arr[b] - arr[a] == c)sum += d;
  	ans = max(ans, sum);
  }
  cout << ans << endl;
}
