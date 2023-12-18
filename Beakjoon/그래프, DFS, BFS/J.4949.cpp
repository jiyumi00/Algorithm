#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	while(true){	
		getline(cin,s);
		if(s=="."){
			break;
		}
		stack<char>stk;
		bool check=true;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(' || s[i]=='['){
				stk.push(s[i]);
			}
			else if(s[i]==')' || s[i]==']'){

				if(stk.size()!=0){	
					if((stk.top()=='('&&s[i]==')')||(stk.top()=='['&&s[i]==']')){
						stk.pop();
					}
					else{
						check=false;
					}
				}
				else{
					check=false;
				}
			}
		}
		if(check&&stk.size()==0){
			cout<<"yes"<<'\n';
		}
		else{
			cout<<"no"<<'\n';
		}
	}
}
