#include<bits/stdc++.h>
using namespace std;

int main(){
	int pokemonCnt, testCnt,index;
	vector<string>pokemonName;
	
	cin>>pokemonCnt;
	cin>>testCnt;
	
	for(int i=0;i<pokemonCnt;i++){
		string name;
		cin>>name;
		pokemonName.push_back(name);
	}
	for(int i=0;i<testCnt;i++){
		auto* input=&num;
		cin>>num;
		
		if(num.c_str()==0){ //문자이면 
			for(int j=0;j<pokemonName.size();j++){
				if(pokemonName[i]==num){
					index=i;
				}
			}
			cout<<index+1;
		}
		else{
			cout<<pokemonName[num-1];
		} 
		
	}
	return 0;

}
