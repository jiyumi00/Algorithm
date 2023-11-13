#include<bits/stdc++.h>
using namespace std;

int a[64][64];
int n;

int cnt[4];
vector<char>output;
void quadTree(int x, int y){
	fill(&cnt[0],&cnt[0]+5,0);
	cout<<"----왼쪽 위 ----"<<'\n';
	for(int i=x;i<n/2+x;i++){
		for(int j=y;j<n/2+y;j++){
			cout<<a[i][j]; 
			if(a[i][j]==1){
				cnt[0]++;
			}
		}
		cout<<'\n';
	}
	
	cout<<"----오른쪽 위 ----"<<'\n';
	for(int i=x;i<n/2+x;i++){
		for(int j=n/2+y;j<n;j++){
			cout<<a[i][j];
			if(a[i][j]==1){
				cnt[1]++;
			}
		}
		cout<<'\n';
	}
	cout<<"----왼쪽 아래 ----"<<'\n';
	for(int i=n/2+x;i<n;i++){
		for(int j=y;j<n/2+y;j++){
			cout<<a[i][j];
			if(a[i][j]==1){
				cnt[2]++;
			}
		}
		cout<<'\n';
	}
	cout<<"----오른쪽 아래 ----"<<'\n';
	for(int i=n/2+x;i<n;i++){
		for(int j=n/2+y;j<n;j++){
			cout<<a[i][j];
			if(a[i][j]==1){
				cnt[3]++;
			}
		}
		cout<<'\n';
	}	
	
	
}
int main(){
	cin>>n;
	
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<n;j++){
			a[i][j]=s[j]-'0';
		}
	}
	
	quadTree(0,0);

	cout<<'\n';
	cout<<"lu: "<<str[0]<<'\n';
	cout<<"ru: "<<str[1]<<'\n';
	cout<<"ld: "<<str[2]<<'\n';
	cout<<"rd: "<<str[3]<<'\n';
	//cout<<output<<'\n';
}
