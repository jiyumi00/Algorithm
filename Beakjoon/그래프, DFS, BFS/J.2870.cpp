#include<bits/stdc++.h>
using namespace std;

string s;
string num;
vector<int>v;
int n;
vector<string>nums;

void go(){
	while(true){
		if(num.size() && num.front()=='0') num.erase(num.begin());
		else break;
	}
	if(num.size()==0) num='0';
	nums.push_back(num);
	num.clear();
}
bool cmp(string a,string b){
	if(a.size()==b.size()) return a<b;//2순위 
	return a.size()<b.size();//1순위 
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		num.clear();
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])==1){ //숫자일 때 
				num+=s[i];
			}
			else{ //문자일 때 
				if(!num.empty()){ //num이 안비어 있을 때 
					go();
				}	
			}
		}
		if(!num.empty()){
			go();
		}
	}
	sort(nums.begin(),nums.end(),cmp);//정렬 
	for(string i:nums){
		cout<<i<<'\n';
	}
}
