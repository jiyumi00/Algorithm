#include<bits/stdc++.h>
using namespace std;

int a[16][16];
int testCase,m,n,sum,maxNum=0;
vector<int>sums;

void move(int x,int y){
	sum=0;
	for(int i=x;i<x+m;i++){
		for(int j=y;j<y+m;j++){
			sum+=a[i][j];
		}
	}
	sums.push_back(sum);
}
int main(){
	cin>>testCase;
	
	for(int t=0;t<testCase;t++){
		maxNum=0;
		fill(sums.begin(),sums.end(),0);
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		
		for(int i=0;i<n-m+1;i++){
			for(int j=0;j<n-m+1;j++){
				move(i,j);
			}
		}
		
		maxNum=*max_element(sums.begin(),sums.end());
//		for(int item:sums){
//			if(maxNum<item){
//				maxNum=item;
//			}
//		}
		cout<<"#"<<t+1<<" "<<maxNum<<'\n';
	}
}
