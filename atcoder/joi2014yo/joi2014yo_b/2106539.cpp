// URL: https://atcoder.jp/contests/joi2014yo/submissions/2106539
// Date: Sun, 18 Feb 2018 02:41:50 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A, result(N, 0);
	int tmp;
	for (int i = 0; i<N; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	for (int i = 0; i<M; i++) {
		cin >> tmp;
		for (int j = 0; j<N; j++) {
			if (A[j] <= tmp) {
				result[j]++;
				break;
			}
		}
	}
	auto itr = max_element(result.begin(), result.end());
	cout << distance(result.begin(), itr) + 1 << endl;
	return 0;
}
