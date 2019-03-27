// URL: https://atcoder.jp/contests/abc122/submissions/4726289
// Date: Wed, 27 Mar 2019 01:51:33 +0000
// Language: C++14 (GCC 5.4.1)
#include <stdio.h>
#include <string.h>

int main() {
    char S[11];
    int length;
    int ans = 0;
    int count = 0;
    scanf("%s", S);
    length = strlen(S);
    for (int i = 0; i < length; ++i) {
        switch (S[i]) {
        case 'A':case 'C':case 'G':case 'T':
            ++count;
            break;
        default:
            count = 0;
            break;
        }
        if (ans < count)ans = count;
    }
    printf("%d
", ans);
}
