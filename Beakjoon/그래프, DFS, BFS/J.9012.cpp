#include<bits/stdc++.h>
using namespace std;

string a;
char ret;
stack<char> s;
int main(){
	int testCase;
	
	cin>>testCase;
	for(int t=0;t<testCase;t++){
		cin>>a;
		while(!s.empty()) s.pop();
		for(int i=0;i<a.size();i++){
			if(s.empty()){
				s.push(a[i]);
				ret=s.top();
			}
			else{
				if(ret=='('&&a[i]==')'){
					s.pop();
					if(s.empty()){
						ret=' ';
					}
					else{
						ret=s.top();
					}
				}
				else{
					s.push(a[i]);
					ret=s.top();
				}
			}
		}
		if(s.empty()){
			cout<<"YES"<<'\n';
		}
		else{
			cout<<"NO"<<'\n';
		}
	}
	
}
