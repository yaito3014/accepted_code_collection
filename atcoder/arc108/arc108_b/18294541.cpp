// URL: https://atcoder.jp/contests/arc108/submissions/18294541
// Date: Sun, 22 Nov 2020 05:30:52 +0000
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <numeric>
#include <string>

int main() {
 int n;
 std::cin >> n;
 std::string s;
 std::cin >> s;
 for (int p = s.find("fox"); p != s.npos; p = s.find("fox", std::max(0, p - 3)))
   s.replace(p, 3, "");
 std::cout << s.length() << '\n';
}
