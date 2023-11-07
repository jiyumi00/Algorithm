#include<bits/stdc++.h>
using namespace std;

int a[104][104],visited[104][104];
int m,n,k,lx,ly,rx,ry,ret;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

void dfs(int x,int y){
	cout<<"("<<x<<", "<<y<<")"<<'\n';
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(ny<0 || nx<0 || ny>=m || nx>=n) continue;
		if(visited[nx][ny]==0 && a[nx][ny]==1){
			dfs(nx,ny);
		}
	}
	return;
}
int main(){
	cin>>m>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=1;
		}
	}
	for(int v=0;v<k;v++){

		cin>>lx>>ly>>rx>>ry;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(i>=lx+1 && i <=rx && j>=ly+1 && j<=ry){
					a[i][j]=0;
				}
			}
		}
		lx=0;ly=0;rx=0;ry=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]==1 && visited[i][j]==0){
				cout<<i<<", "<<j<<'\n';
				dfs(i,j);
			
			}
		}
		
	}
	
}
