#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
double output;
int testCase,num,maxNum,minNum,maxIdx,minIdx,sum;
vector<int>nums;
int main(){
	cin>>testCase;
	
	for(int t=1;t<=testCase;t++){
		
		maxNum=0;minNum=10000;sum=0;maxIdx=0;minIdx=0;
		for(int i=0;i<10;i++){
			cin>>num;
			nums.push_back(num);
			
			if(maxNum<num){
				maxNum=num;
				maxIdx=i;
			}
			if(minNum>num){
				minNum=num;
				minIdx=i;
			}
		}
		for(int i=0;i<nums.size();i++){
			if(nums[i]==maxNum || nums[i]==minNum){
				nums.erase(nums.begin()+i);
				i--;
			}
		}
	
		for(int item:nums){
			sum+=item;
		}
		output=(double)sum/8.0;
		cout<<"#"<<t<<" "<<round(output)<<'\n';
		
		nums.clear();
	}
	
}
