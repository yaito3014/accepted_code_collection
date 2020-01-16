// URL: https://atcoder.jp/contests/chokudai_S001/submissions/9539177
// Date: Thu, 16 Jan 2020 16:19:23 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
  i64 n;
  cin >> n;
  vector<i64> a(n);
  for (i64 i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  for (i64 i = 0; i < n; i++)
    cout << a[i] << (i + 1 == n ? "
" : " ");
  return 0;
}
