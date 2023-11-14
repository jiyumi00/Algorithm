#include<bits/stdc++.h>
using namespace std;

int n,cnt;
string s;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		stack<char> stk;
		for(char ch:s){
			if(stk.size()&&stk.top()==ch) stk.pop();
			else stk.push(ch);
		}
		if(stk.size()==0) cnt++;
	}
	cout<<cnt<<"\n";
}
