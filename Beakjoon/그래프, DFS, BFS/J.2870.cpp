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
	if(a.size()==b.size()) return a<b;//2���� 
	return a.size()<b.size();//1���� 
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		num.clear();
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])==1){ //������ �� 
				num+=s[i];
			}
			else{ //������ �� 
				if(!num.empty()){ //num�� �Ⱥ�� ���� �� 
					go();
				}	
			}
		}
		if(!num.empty()){
			go();
		}
	}
	sort(nums.begin(),nums.end(),cmp);//���� 
	for(string i:nums){
		cout<<i<<'\n';
	}
}
