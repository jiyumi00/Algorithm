#include<bits/stdc++.h>
using namespace std;

int main(){
	int parkingFee[3],startTime,endTime,time[100]={0,},sum=0,num;
	
	for(int i=0;i<3;i++){
		cin>>parkingFee[i];
	}
	
	for(int i=0;i<3;i++){
		cin>>startTime>>endTime;
		for(int j=startTime;j<endTime;j++){
			time[j]++;		
		}
	}

	for(int i=1;i<100;i++){

		sum+=time[i]*parkingFee[time[i]-1];
//		num=0;
//		if(time[i]==1){
//			num=time[i]*parkingFee[0];
//		}
//		else if(time[i]==2){
//			num=time[i]*parkingFee[1];
//		}
//		else if(time[i]==3){
//			num=time[i]*parkingFee[2];
//		}
//		sum+=num;
	}
	
	cout<<sum;
}
