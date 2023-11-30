#include<bits/stdc++.h>
using namespace std;

long long n,result,cnt;
string num;
int fact(int n){
	if(n==1 || n==0) return 1;
	return n*fact(n-1);
}
int main(){
	cin>>n;

	result=fact(n);
	cout<<result<<'\n';
	num=to_string(result);
	
	for(int i=num.size()-1;i>0;i--){
		if(num[i]!='0'){
			break;
		}
		else{
			cnt++;
		}
	}
	cout<<cnt<<'\n';
}
