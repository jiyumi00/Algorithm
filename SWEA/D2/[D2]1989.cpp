#include<bits/stdc++.h>
using namespace std;

string s,newS;
int testCase;
int main(){
	cin>>testCase;
	
	for(int t=1;t<=testCase;t++){
		cin>>s;
		newS=s;
		reverse(newS.begin(),newS.end());
		
		cout<<"#"<<t<<" ";
		if(newS==s){
			cout<<1<<'\n';
		}
		else{
			cout<<0<<'\n';
		}	
	}
}
