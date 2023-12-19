#include<bits/stdc++.h>
using namespace std;

int visited[104][104];
int a[104][104];
int n,m;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
void dfs(int y,int x){
	visited[y][x]=1;
	
	cout<<"--"<<y<<","<<x<<'\n';
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
	
		if(ny<0 || ny>=n || nx<0 || nx>=m) continue;
		if(visited[ny][nx]==0){
			cout<<"("<<ny<<","<<nx<<") "<<a[ny][nx]<<endl;
		}
			
		if(visited[ny][nx]==0 && a[ny][nx]==1){
			cout<<"--dfs 시작 "<<endl; 
			dfs(ny,nx);
			
		}
	}
}
int main(){
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1 && visited[i][j]==0){
				cout<<"dfs 시작 "<<endl; 
				dfs(i,j);
				
			}
		}
	}
}
