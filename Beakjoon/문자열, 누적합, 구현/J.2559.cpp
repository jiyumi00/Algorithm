#include<bits/stdc++.h>
using namespace std;

int main(){
	int day,dayCnt,temp[1000000]={0,},num,tempSum[1000000],bigNum=-10000000;
	cin>>day>>dayCnt;
	
	for(int i=1;i<=day;i++){
		cin>>num;
		temp[i]=temp[i-1]+num;
	}
	for(int i=dayCnt;i<=day;i++){
		tempSum[i]=temp[i]-temp[i-dayCnt];
		if(bigNum<tempSum[i]){
			bigNum=tempSum[i];
		}
	}
	cout<<bigNum;
}
