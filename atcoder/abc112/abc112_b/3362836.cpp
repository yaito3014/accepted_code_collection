// URL: https://atcoder.jp/contests/abc112/submissions/3362836
// Date: Sun, 07 Oct 2018 09:53:57 +0000
// Language: C++14 (GCC 5.4.1)
#include <stdio.h>
#include <limits.h>

int main(void) {
	int N, T, c, t, C = INT_MAX, Flag = 0;
	scanf("%d %d", &N, &T);
	for (int i = 0; i < N;++i) {
		scanf("%d %d", &c, &t);
		if (t <= T && C > c) {
			C = c;
			Flag = 1;
		}
	}
	if (Flag)printf("%d", C);
	else printf("TLE");
	return 0;
}
