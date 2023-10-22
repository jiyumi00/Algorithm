#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,alphabetCnt[26]={0,},cnt=0;
	string firstName;
	string newFirstName;
	
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>firstName;
		alphabetCnt[firstName[0]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(alphabetCnt[i]>=5){
			cnt++;
			newFirstName+='a'+i;
		}
	}
	if(cnt==0){
		newFirstName="PREDAJA";
	}
	cout<<newFirstName;
}
