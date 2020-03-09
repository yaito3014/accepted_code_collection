// URL: https://www.hackerrank.com/contests/snct-spring20/challenges/koppa-koppa/submissions/code/1320953506
// Tester
// Language: C++14
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
  i64 Q, X;
  cin >> Q >> X;
  i64 ans = 0;
  for (i64 i = 1; i <= sqrt(X); i++)
    if (X % i == 0 && X / i <= Q)
    {
      if (X / i == i)
        ans++;
      else
        ans += 2;
    }
  cout << ans << endl;
  return 0;
}
