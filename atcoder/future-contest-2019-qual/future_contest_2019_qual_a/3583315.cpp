// URL: https://atcoder.jp/contests/future-contest-2019-qual/submissions/3583315
// Date: Sun, 11 Nov 2018 02:20:21 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
#include <assert.h>

using namespace std;

int n, m, l;
vector<string> s, ans, tmp;

static int limit = 2990;
chrono::system_clock::time_point start;

inline int eval()
{
	int score = 0;
	vector<vector<int>> cnt(m, vector<int>(m, 0));
	for (int i = 0; i < 500; i++)
	{
		int d = 0, posx = 14, posy = 14;
		for (int j = 0; j < 300; j++)
		{
			switch (s[i][j])
			{
			case 'S':
				switch (d)
				{
				case 0:
					if (tmp[posx - 1][posy] != '#')
						posx--;
					break;
				case 1:
					if (tmp[posx][posy + 1] != '#')
						posy++;
					break;
				case 2:
					if (tmp[posx + 1][posy] != '#')
						posx++;
					break;
				case 3:
					if (tmp[posx][posy - 1] != '#')
						posy--;
					break;
				}
				break;
			case 'L':
				if (tmp[posx][posy] == 'R')
				{
					d++;
					if (d == 4)
						d = 0;
				}
				else
				{
					d--;
					if (d == -1)
						d = 3;
				}
				break;
			case 'R':
				if (tmp[posx][posy] == 'L')
				{
					d--;
					if (d == -1)
						d = 3;
				}
				else
				{
					d++;
					if (d == 4)
						d = 0;
				}
				break;
			}
		}
		cnt[posx][posy]++;
		switch (cnt[posx][posy])
		{
		case 1:
			score += 10;
			break;
		case 2:
			score -= 7;
			break;
		case 3:
			score -= 2;
			break;
		case 4:
			score -= 1;
			break;
		}
	}
	return score;
}

inline int simulate()
{
	tmp = ans;
	int cnt = 0, best = eval();
	while (static_cast<double>(chrono::duration_cast<chrono::microseconds>(chrono::system_clock::now() - start).count() / 1000.0) < limit)
	{
		tmp = ans;
		int x = 1 + rand() % 27, y = 1 + rand() % 27;
		tmp[x][y] = (rand() % 2 == 0 ? 'L' : 'R');
		int score = eval();
		if (best < score)
		{
			best = score;
			ans = tmp;
		}

		cnt++;
	}
	cerr << "score: " << best << endl;
	return cnt;
}

int main()
{
	srand(100);
	cin >> n >> m >> l;
	s.resize(n);
	for (int i = 0; i < n; i++)
		cin >> s[i];
	start = chrono::system_clock::now();
	ans.resize(m);
	for (int i = 0; i < m; i++)
		ans[0] += "#";
	ans[m - 1] = ans[0];
	for (int i = 1; i < m - 1; i++)
	{
		ans[i] = "#";
		for (int j = 0; j < m - 2; j++)
			ans[i] += "L";
		ans[i] += "#";
	}
	int loop = simulate();
	for (int i = 0; i < m; i++)
		cout << ans[i] << endl;
	cerr << "loop: " << loop << endl;

	return 0;
}
