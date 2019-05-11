// URL: https://atcoder.jp/contests/abc075/submissions/5339704
// Date: Sat, 11 May 2019 09:51:56 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main(){
	
	const int NodeNum = 50;
	const int EdgeNum = 50;
	
	int N, M;
	int ans=0;
	bool visited[NodeNum]={};
	bool nodes[NodeNum][EdgeNum] = {};
	int a[NodeNum], b[NodeNum];
	std::queue<int> q;
	
	std::cin >> N >> M;
	for(int i=0;i<M;++i){
		std::cin >> a[i] >> b[i];
		//対応する頂点を紐付ける
		nodes[a[i]-1][b[i]-1] = true;
		nodes[b[i]-1][a[i]-1] = true;
	}
	//すべての辺において
	for(int i=0;i<M;++i){
		bool all_visited=true;
		//適当に開始地点を設定する
		q.push(0);
		//全て0(false)にする
		memset(visited,0,sizeof(bool)*NodeNum);
		while(!q.empty()){
			//探索すべき頂点をコピー
			int now = q.front();
			//先頭をデキュー(削除する)
			q.pop();
			//探索済みにする
			visited[now] = true;
			//すべての頂点において
			for(int j=0;j<N;++j){
				//その頂点に行けないなら無視
				if(!nodes[now][j])continue;
				//辺を通れなくする
				if(
					(now==a[i]-1&&j==b[i]-1) ||
					(now==b[i]-1&&j==a[i]-1)
				)continue;
				//未訪問なら
				if(!visited[j]){
					//探索地点として追加
					q.push(j);
				}
			}
		}
		//すべて訪問済みかどうか
		for(int j=0;j<N;++j){
			if(!visited[j]){
				all_visited = false;
				break;
			}
		}
		//訪問できていなければその辺は橋であった
		if(!all_visited)++ans;
	}
	std::cout << ans << std::endl;
}
