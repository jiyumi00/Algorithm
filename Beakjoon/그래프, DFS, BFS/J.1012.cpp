#include<bits/stdc++.h>
using namespace std;

int a[54][54];
int visited[54][54];

int testCnt,m,n,earthwormCnt,x,y,ret;
int dy[4]={-1,0,1,0};
int dx[4]={0,1,0,-1};

void dfs(int y,int x){
	//cout<<y<<", "<<x<<'\n';
	visited[y][x]=1;
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		if(ny<0 || nx<0 || ny >=n || nx >=m) continue;
		if(visited[ny][nx]==0 && a[ny][nx]==1){
			dfs(ny,nx);
		}
	}
}
int main(){
	cin>>testCnt;

	for(int t=0;t<testCnt;t++){
		for(int i=0;i<54;i++){
			for(int j=0;j<54;j++){
				a[i][j]=0;
				visited[i][j]=0;
			}
		}
		cin>>m>>n>>earthwormCnt;
		ret=0;
		for(int v=0;v<earthwormCnt;v++){
			cin>>x>>y;
			a[y][x]=1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(visited[i][j]==0 && a[i][j]==1){
					dfs(i,j);
					ret++;
				}
			}
		}
		cout<<ret<<'\n';
	}
}
