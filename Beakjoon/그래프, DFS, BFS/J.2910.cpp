#include<bits/stdc++.h>
using namespace std;

vector<int>nums;
vector<int>cnts;
int n,c,num,index,maxNum=0,maxIndex;

bool cmp(int a,int b){
	return a>b;
}
int main(){
	cin>>n>>c;
	
	for(int i=0;i<n;i++){
		cin>>num;
		if(find(nums.begin(),nums.end(),num)!=nums.end()){
			index=find(nums.begin(),nums.end(),num)-nums.begin();
			cnts[index]++;
		}
		else{
			nums.push_back(num);
			cnts.push_back(1);
		} 
		
	}
	cout<<"nums"<<'\n';
	for(int i:nums){
		cout<<i<<" ";
	}
	cout<<'\n';
	cout<<"cnts"<<'\n';
	for(int i:cnts){
		cout<<i<<" ";
	}
	cout<<'\n';


	
	
}
