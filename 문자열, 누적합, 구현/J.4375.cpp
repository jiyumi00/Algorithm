#include<bits/stdc++.h>
using namespace std;

int main(){
	int input;
	while(cin>>input){
		long long i=1,cnt=1;
		while(1){
			if(i%input==0){
				cout<<cnt<<'\n';
				break;
			}
			else{
				i=(i*10)+1;
				i%=input;
				cnt++;
			}
		}
	}
}
