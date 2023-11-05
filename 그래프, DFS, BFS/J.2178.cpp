#include<bits/stdc++.h>
using namespace std;

bool maze[104][104];
int visited[104][104];
const int dy[4]={-1,0,1,0};
const int dx[4]={0,1,0,-1};
int y,x,n,m;

void bfs(int sy,int sx){
	queue<pair<int,int>>q;
	visited[sy][sx]=1;
	q.push({sy,sx});
	
	while(q.size()){
		tie(y,x)=q.front(); q.pop();
		for(int i=0;i<4;i++){
			int ny=y+dy[i];
			int nx=x+dx[i];
			if(ny<0 || nx<0 || ny >=n || nx>=m|| maze[ny][nx]==0) continue;
			if(visited[ny][nx]) continue;
			
			visited[ny][nx]=visited[y][x]+1;
			q.push({ny,nx});	
		}
	}
}
int main(){
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<m;j++){
			maze[i][j]=s[j]-'0';
		}
	}
	bfs(0,0);
	cout<<visited[n-1][m-1]<<'\n';
	
}
