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
		
		for(int i=0;i<a.size();i++){
			if(s.empty()){
				s.push(a[i]);
				cout<<a[i]<<"push"<<'\n';
			}
			else{
				if(ret=='('&&a[i]==')'){
					s.pop();
					cout<<ret<<"pop"<<'\n';
				}
				else{
					s.push(a[i]);
					cout<<a[i]<<"push"<<'\n';
				}
			}
		
	
			ret=s.top();
			cout<<i<<": "<<s.size()<<'\n';
			
		}
		
	}
	
}
