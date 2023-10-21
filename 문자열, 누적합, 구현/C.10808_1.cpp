#include<bits/stdc++.h>
using namespace std;

string str;
int cnt[26];
int main(){
	cin>>str;
	
	for(char a : str){
		cnt[a-'a']++;
	}
	/*
	for(int i=0;i<str.size();i++){
		cnt[(int)str[i]-97]++;
	}*/
	for(int i=0;i<26;i++) cout<<cnt[i]<<" ";
	return 0;
	 
	
}
