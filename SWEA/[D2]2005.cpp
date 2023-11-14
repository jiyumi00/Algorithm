#include<bits/stdc++.h>
using namespace std;

int a[10][10];
int testCase,n;
int main(){
	cin>>testCase;
	
	for(int t=1;t<=testCase;t++){
		cin>>n;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				a[i][j]=1;
				if(i>=3 && j>=2 && j<i){
					a[i][j]=a[i-1][j-1]+a[i-1][j];
				}
			}
		}
		cout<<"#"<<t<<'\n';
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<a[i][j]<<' ';
			}
			cout<<'\n';
		}
		
	}
} 
