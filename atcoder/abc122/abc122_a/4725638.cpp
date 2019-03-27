// URL: https://atcoder.jp/contests/abc122/submissions/4725638
// Date: Wed, 27 Mar 2019 00:02:28 +0000
// Language: C++14 (GCC 5.4.1)
#include <stdio.h>

int main() {   
    char b;
    scanf("%c",&b);
    char ans;
    switch (b) {
    case 'A':ans = 'T'; break;
    case 'C':ans = 'G'; break;
    case 'G':ans = 'C'; break;
    case 'T':ans = 'A'; break;
    }
    printf("%c",ans);
}
