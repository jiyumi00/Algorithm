#include<bits/stdc++.h>
using namespace std;

int main(){
	int materialCnt,sum,cnt=0;
	vector<int>materialNumber;
	cin>>materialCnt;
	cin>>sum;
	
	for(int i=0;i<materialCnt;i++){
		int num;
		cin>>num;
		materialNumber.push_back(num);
	}
	
	for(int i=0;i<materialCnt;i++){
		for(int j=i+1;j<materialCnt;j++){
			if(materialNumber[i]+materialNumber[j]==sum){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	
}
