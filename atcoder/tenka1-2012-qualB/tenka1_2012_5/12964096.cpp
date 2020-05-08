// URL: https://atcoder.jp/contests/tenka1-2012-qualB/submissions/12964096
// Date: Fri, 08 May 2020 17:51:01 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "
"

int main()
{
  i64 a, b, c;
  cin >> a >> b >> c;
  for (i64 i = 1; i < 128; i++)
    if (i % 3 == a && i % 5 == b && i % 7 == c)
      cout << i << endl;
  return 0;
}
