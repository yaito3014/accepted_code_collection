// URL: https://atcoder.jp/contests/qupc2018/submissions/3438944
// Date: Sat, 20 Oct 2018 07:16:51 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main(){
  int Q;
	std::cin >> Q;
	int A[50], B[50], C[50];
	for (int i = 0; i < Q; ++i)
		std::cin >> A[i] >> B[i] >> C[i];
	for (int i = 0; i < Q; ++i) {
		bool flag = true;
		if (A[i] % 2) {
			if(B[i] >= 10)B[i] -= 10;
			else if (C[i] >= (10 - B[i]) * 10)B[i] = 0, C[i] -= 100;
			else flag = false;
		}
		if (B[i] % 2) {
			if(C[i] >= 10)C[i] -= 10;
			else flag = false;
		}
		if (C[i] % 2)flag = false;

		printf("%s\n", flag ? "Yes" : "No");
	}
}
