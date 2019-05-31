// URL: https://atcoder.jp/contests/abc020/submissions/5712028
// Date: Fri, 31 May 2019 09:20:48 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

struct Pos{
	int x,y;
	Pos():Pos(0,0){}
	Pos(int x,int y):x(x),y(y){}
	Pos& operator+=(const Pos& arg){
		x+=arg.x;
		y+=arg.y;
		return *this;
	}
};
Pos operator+(const Pos&a,const Pos&b){
	return Pos(a.x+b.x,a.y+b.y);
}

int main() {
	
	using namespace std;
	int H,W,T;
	cin >> H >> W >> T;
	vector<vector<char>> s(H,vector<char>(W));
	queue<Pos> q;
	Pos start,goal;
	for(auto&r:s)for(auto&e:r)cin>>e;
	for(int h=0;h<H;++h){
		for(int w=0;w<W;++w){
			if(s[h][w]=='S')start=Pos(w,h);
			if(s[h][w]=='G')goal=Pos(w,h);
		}
	}
	std::array<Pos,4> dir={{
		Pos(0,1),Pos(0,-1),Pos(1,0),Pos(-1,0),
	}};
	int left=1,right=T;
	int t=0;
	int x;
	while(right-left>1){
		x = (left+right)/2;
		q.push(start);
		vector<vector<int64_t>> memo(H,vector<int64_t>(W,INT_MAX));
		memo[start.y][start.x]=0;
		while(!q.empty()){
			Pos now = q.front();
			q.pop();
			for(auto&d:dir){
				Pos next = now+d;
				if(next.x<0||W<=next.x||next.y<0||H<=next.y)continue;
				int64_t cost = (s[next.y][next.x]=='#'?x:1);
				if(memo[now.y][now.x]+cost<memo[next.y][next.x]){
					memo[next.y][next.x]=memo[now.y][now.x]+cost;
					q.push(next);
				}
			}
		}
		t=memo[goal.y][goal.x];
		if(t<=T)left=x;
		else right=x;
	}
	cout<<left<<endl;
}
