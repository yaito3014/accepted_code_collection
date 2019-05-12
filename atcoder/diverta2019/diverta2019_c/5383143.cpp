// URL: https://atcoder.jp/contests/diverta2019/submissions/5383143
// Date: Sun, 12 May 2019 22:52:25 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {

    int N;
    std::cin >> N;
    std::vector<std::string> s(N);
    for (auto& i : s)std::cin >> i;
    int ans = 0;
    int a = 0;
    int b = 0;
    int ba = 0;
    for (auto& str : s) {
        int count = 0;
        for (int i = 0; i < str.size() - 1; ++i) {
            if (str[i] == 'A' && str[i + 1] == 'B')++ans;
        }
        if (str.back() == 'A'&&str.front() == 'B')++ba;
        else{
        	if (str.back() == 'A')++a;
        	if (str.front() == 'B')++b;
        }
    }
    
    if(ba==0)
    	ans += std::min(a,b);
    else if(a+b>0)
    	ans += ba + std::min(a,b);
    else
    	ans += ba-1;

    std::cout << ans << std::endl;
}
