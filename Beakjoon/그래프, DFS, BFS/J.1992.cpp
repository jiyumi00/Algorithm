#include<bits/stdc++.h>
using namespace std;
 
int n;
string s;
char a[101][101];


string quadTree(int x,int y,int size){
	if(size==1) return string(1, a[x][y]);
	char b=a[x][y];
	string ret="";
	for(int i=x;i<x+size;i++){
		for(int j=y;j<y+size;j++){
			if(b!=a[i][j]){
				ret+='(';
				ret+=quadTree(x,y,size/2);
				ret+=quadTree(x,y+size/2,size/2);
				ret+=quadTree(x+size/2,y,size/2);
				ret+=quadTree(x+size/2,y+size/2,size/2);
				ret+=')';
				return ret;
			}
		
		}
	}
	return string(1,a[x][y]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<n;j++){
			a[i][j]=s[j];
		}
	}
	cout<<quadTree(0,0,n)<<'\n';
	
}
