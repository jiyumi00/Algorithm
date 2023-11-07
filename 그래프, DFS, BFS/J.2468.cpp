#include<bits/stdc++.h>
using namespace std;

int a[104][104],visited[104][104];
int n,minNum=100,maxNum=1,ret,k,retMax;
int dy[4]={-1,0,1,0};
int dx[4]={0,1,0,-1};
vector<int> rets;

void dfs(int x,int y){
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		if(ny<0 || nx<0 || ny>=n || nx >=n) continue;
		if(a[nx][ny]>k &&visited[nx][ny]==0){
			dfs(nx,ny);
		}
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(minNum>a[i][j]){
				minNum=a[i][j];
			}
			if(maxNum<a[i][j]){
				maxNum=a[i][j];
			}
		}
	}
	
	for(k=minNum;k<maxNum;k++){
        fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
		ret=0;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]>k && visited[i][j]==0){
					dfs(i,j);
					ret++;
				}
			}
		}
		//cout<<k<<"일때 ret: "<<ret<<'\n'; 
		rets.push_back(ret);	
	}
	//ret중에 제일 최대값
	retMax=*max_element(rets.begin(),rets.end());
	cout<<retMax;
	return 0;
}
