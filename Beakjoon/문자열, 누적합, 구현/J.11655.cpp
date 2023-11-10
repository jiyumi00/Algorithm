#include<bits/stdc++.h>
using namespace std;

int main(){
	string input;
	getline(cin,input);
	
	for(int i=0;i<input.size();i++){
		if(input[i]>='A' && input[i]<='Z'){
			if(input[i]<='Z'-13)
				cout<<(char)(input[i]+13);
			else
				cout<<(char)((input[i]+13-'Z'-1)+'A');
		}
		else if(input[i]>='a'&&input[i]<='z'){
			if(input[i]<='z'-13)
				cout<<(char)(input[i]+13);
			else
				cout<<(char)((input[i]+13-'z'-1)+'a');
		}
		
		else{
			cout<<input[i];
		}
	}


	
	
}
