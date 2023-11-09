#include<bits/stdc++.h>
using namespace std;

int a[104][104],visited[104][104];
int m,n,k,lx,ly,rx,ry,cnt,ret;
int dy[4]={-1,0,1,0};
int dx[4]={0,-1,0,1};
vector<int> cnts;

void dfs(int x,int y){
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(ny<1 || nx<1 || ny>m || nx>n) continue;
		if(visited[nx][ny]==0 && a[nx][ny]==1){
			cnt++;
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
				dfs(i,j);
				cnt++;
				cnts.push_back(cnt);
				cnt=0; ret++;
			}
		}
	}
	sort(cnts.begin(),cnts.end());
	cout<<ret<<'\n';
	for(int item: cnts){
		cout<<item<<' ';
	}
}
