#include<bits/stdc++.h>
using namespace std;

vector<int>arr; 

int temp,sum=0,num;
int main(){
	//�迭 �Է¹ޱ� 
	for(int i=0;i<9;i++){
		cin>>num;
		arr.push_back(num);
		sum+=num;
	}
	//2�� ����
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){	
			if(sum-(arr[i]+arr[j])==100){
				//arra[i], arr[j] �����
				 arr.erase(arr.begin()+i);
				 arr.erase(arr.begin()+j-1);
				
			}
		}
	} 
	 //	�������� ���� 
	for(int i=0;i<7;i++){
		for(int j=i;j<7;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<7;i++){
		cout<<arr[i]<<'\n';
	}
}
