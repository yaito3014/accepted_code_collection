// URL: https://atcoder.jp/contests/abc165/submissions/12681574
// Date: Sun, 03 May 2020 01:54:02 +0000
// Language: C (GCC 9.2.1)
#include <stdio.h>
#include <stdlib.h>

void dfs(int n, int a, int N, int M, int Q,
	int* arr,	const int (*abcd)[4], int* ans) {
	if(n == N) {
		int sum = 0;
		for(int i = 0; i < Q; ++i)
			if(arr[abcd[i][1]] - arr[abcd[i][0]] == abcd[i][2])
				sum += abcd[i][3];
		if(*ans < sum)*ans = sum;
		
		return;
	}
	for(; a <= M; ++a) {
		arr[n] = a;
		dfs(n + 1, a, N, M, Q, arr, abcd, ans);
	}
}

int main(void) {
	int N, M, Q;
	scanf("%d %d %d", &N, &M, &Q);
	int(*abcd)[4] = (int(*)[4])malloc(sizeof(int[4]) * Q);
	for(int i = 0; i < Q; ++i) {
		for(int j = 0; j < 4; ++j)
			scanf("%d", &abcd[i][j]);
		--abcd[i][0]; --abcd[i][1];
	}
	int ans = 0;
	int* arr = (int*)malloc(sizeof(int) * N);
	dfs(0, 1, N, M, Q, arr, abcd, &ans);
	printf("%d\n", ans);
	free(arr);
	free(abcd);
}
