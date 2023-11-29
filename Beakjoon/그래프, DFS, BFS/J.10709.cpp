#include<bits/stdc++.h>
using namespace std;

int h,w,ret,cnt;
char a[104][104];
int b[104][104];
int main(){
	
	cin>>h>>w;
	for(int i=0;i<h;i++){
		ret=0;cnt=0;
		for(int j=0;j<w;j++){
			cin>>a[i][j];
			if(a[i][j]=='c'){
				ret=1; cnt=0;
				b[i][j]=cnt;
			}
			else{
				if(ret==1){
					cnt++;
					b[i][j]=cnt;
				}
				else{
					b[i][j]=-1;
				}
			}
		}
	}
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<'\n';
	}
	
}
