#include<bits/stdc++.h>
using namespace std;


int main(){
	string word;
	int check=0,wordSize;
	
	cin>>word;
	wordSize=word.size();
	
	for(int i=0;i<wordSize;i++){
		if(word[i]!=word[wordSize-1-i]){
			check=0;
			break;
		}
		check=1;
	}
	
	cout<<check;
}
