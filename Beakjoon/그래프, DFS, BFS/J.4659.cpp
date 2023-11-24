#include<bits/stdc++.h>
using namespace std;

string s;
string a;
bool result;
char mouem[6]={'a','e','i','o','u'};
bool check; 
void twoCheck(){
	for(int i=0;i<s.size();i++){
		if(s[i]=='e'|| s[i]=='o'){
			continue;
		} 
		else{
			if(s[i]==s[i-1]||s[i]==s[i+1]){
				result=0;
			}	
		}
	
		
	} 
}
void mouemCheck(){
	check=0;
	for(int i=0;i<6;i++){
		if(s.find(mouem[i])!=string::npos){
			check=1;
		}
	}
	if(check==0){
		result=0;
	}
}
void threeCheck(){
	for(int i=0;i<s.size();i++){
			//cout<<s[i]<<" ";
			check=0;
			for(int j=0;j<6;j++){
				if(s[i]==mouem[j]){
					check=1;
				}
			}
			if(check==1){
				s[i]='j';
			}
			else{
				s[i]='m';
			}
			
		} 
		for(int i=0;i<s.size();i++){
			if(s[i]=='j'){
				if(s[i-1]=='j' && s[i+1]=='j'){
					result=0; 
				}
			}
			else{
				if(s[i-1]=='m' && s[i+1]=='m'){
					result=0;
				}
			}
		}
}
int main(){
	while(true){
		cin>>s;
		if(s=="end"){
			break;
		}
		a=s;
		result=1;
		
		twoCheck();//연속 두번 글자 
		mouemCheck(); //모음 하나를 반드시 포함
		threeCheck(); //연속 3개 모음 또는 자음
		
		if(result==1){
			cout<<"<"<<a<<"> is acceptable."<<'\n';
		} 
		else{
			cout<<"<"<<a<<"> is not acceptable."<<'\n';
		}
		
	}
}
