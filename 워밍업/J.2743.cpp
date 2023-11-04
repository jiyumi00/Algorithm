#include<bits/stdc++.h>
using namespace std;

int main(){
	int cmdCnt,num;
	vector<int>stack;
	string cmd;
	
	cin>>cmdCnt;
	for(int i=0;i<cmdCnt;i++){
		cin>>cmd;
		if(cmd=="push"){
			cin>>num;
			stack.push_back(num);
		}
		else if(cmd=="pop"){
			if(stack.size()==0){
				cout<<-1<<'\n';
			}
			else{
				cout<<stack.back()<<'\n';
				stack.pop_back();
			}
		}
		else if(cmd=="size"){
			cout<<stack.size()<<'\n';
		}
		else if(cmd=="empty"){
			cout<<stack.empty()<<'\n';
		}
		else if(cmd=="top"){
			if(stack.size()==0) cout<<-1<<'\n';
			else cout<<stack.back()<<'\n';
		}
	}
}
