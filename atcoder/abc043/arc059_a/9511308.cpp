// URL: https://atcoder.jp/contests/abc043/submissions/9511308
// Date: Tue, 14 Jan 2020 12:55:30 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double sum;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    double m = round(sum / (double)n);
    
    double ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] - m) * (a[i] - m);
    }
    
    cout << (int)ans << endl;
}
