#include<bits/stdc++.h>
using namespace std;

bool isNumber(string input){
	if(atoi(input.c_str())!=0 || input.compare("0")==0){
		return 1; //����	
	}
	else return 0;	//���ڿ� 
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int pokemonCnt, testCnt,index;
	map<string,int> pokemon;
	map<int,string> pokemon2;
	string input;
	
	cin>>pokemonCnt;
	cin>>testCnt;
	
	for(int i=1;i<=pokemonCnt;i++){
		string name;
		cin>>name;
		pokemon.insert({name,i});
		pokemon2.insert({i,name});
	}
	
	for(int i=0;i<testCnt;i++){
		cin>>input;
		if(isNumber(input)){  
			//�����϶� = pokemon2  
			cout<<pokemon2[stoi(input)]<<'\n';
		}
		else{
			//���ڿ��϶� = pokemon 
			cout<<pokemon[input]<<'\n';
		}
	}
	return 0;
}
