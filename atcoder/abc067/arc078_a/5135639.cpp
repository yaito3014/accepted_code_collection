// URL: https://atcoder.jp/contests/abc067/submissions/5135639
// Date: Sat, 27 Apr 2019 07:51:57 +0000
// Language: C++14 (GCC 5.4.1)

#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

using namespace std;

int main() {
    long long int N, b = 0, a[100000 * 2] = {}, ans = 0, sum[100000 * 2 + 1] = {}, dif = 0, mini = 1000000000 * 2 + 1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }
    for (int i = 0; i < N - 1; i++) {
        b = (sum[N] - sum[i + 1]) - sum[i + 1];
        dif = abs(b);
        mini = min(dif, mini);
    }
    cout << mini;
    return 0;
}
