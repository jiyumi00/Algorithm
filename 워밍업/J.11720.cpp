#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;
	string num;
	cin>>n;
	cin>>num;
	for(int j=0;j<n;j++){
		sum+=num[j]-'0';
	}	
	
	cout<<sum<<'\n';
}
