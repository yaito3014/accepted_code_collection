// URL: https://codeforces.com/contest/1263/submission/65987038
// Date: Fri, 29 Nov 2019 16:13:31 +0000
// Language: GNU C++17
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
  i64 t;
  cin >> t;
  for (i64 _ = 0; _ < t; _++)
  {
    i64 n;
    cin >> n;
    set<i64> ans;
    i64 tmp = n + 1;
    while (tmp != 0)
    {
      ans.insert(n / tmp);
      tmp = n / (n / tmp + 1);
    }
    cout << ans.size() << endl;
    for (i64 i : ans)
      cout << i << " ";
    cout << endl;
  }
  return 0;
}
