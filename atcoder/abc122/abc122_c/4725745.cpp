// URL: https://atcoder.jp/contests/abc122/submissions/4725745
// Date: Wed, 27 Mar 2019 00:28:50 +0000
// Language: C++14 (GCC 5.4.1)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,Q;
    char S[100001];
    int counts[100001];//i番目までにACが何回現れたか
    int ans[100001];
    int l, r;
    int count = 0;
    scanf("%d",&N);
    scanf("%d",&Q);
    scanf("%s",S);
    //ACが現れた回数をcountsに保存する
    //forの範囲に注意
    for (int i = 0; i < N - 1; ++i) {
        if (S[i] == 'A' && S[i + 1] == 'C')++count;
        counts[i + 1] = count;
    }
    //答えの計算
    for (int i = 0; i < Q; ++i) {
        scanf("%d",&l);
        scanf("%d",&r);
        ans[i] = counts[r - 1] - counts[l - 1];
    }
    for (int i = 0; i < Q; ++i)
    	printf("%d\n", ans[i]);
}
