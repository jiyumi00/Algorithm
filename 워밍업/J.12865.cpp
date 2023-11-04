#include<bits/stdc++.h>
using namespace std;

int main(){
	int itemCnt,weight,itemWeight,itemValue,weightSum,valueSum,max=0;
	vector<int> itemWeights;
	vector<int> itemValues;
	vector<int>maxSum;

	cin>>itemCnt>>weight;
	for(int i=0;i<itemCnt;i++){
		cin>>itemWeight>>itemValue;
		itemWeights.push_back(itemWeight);
		itemValues.push_back(itemValue);
	}
	for(int i=0;i<itemWeights.size();i++){
		for(int j=i+1;j<itemWeights.size();j++){
			int weightSum=itemWeights[i]+itemWeights[j];
			if(weightSum==7){
				valueSum=itemValues[i]+itemValues[j];
				maxSum.push_back(valueSum);
			}
		}
	}
	for(int item: maxSum){
		if(max<item){
			max=item;
		}
	}
	cout<<max;
} 
