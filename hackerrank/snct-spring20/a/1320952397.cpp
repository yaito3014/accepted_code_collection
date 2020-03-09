// URL: https://www.hackerrank.com/contests/snct-spring20/challenges/err-r/submissions/code/1320952397
// Tester
// Language: C++14
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
  i64 A, B;
  cin >> A >> B;
  if (A < B)
    cout << "Error" << endl;
  else
    cout << A - B << endl;
  return 0;
}
