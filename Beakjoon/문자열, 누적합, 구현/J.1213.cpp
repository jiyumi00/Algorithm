#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string input;
	string output,word,reverseWord;
	int oddCnt=0;
	char oddChar;
	int alphabetCnt[26]={0,};
	cin>>input;
	
	for(int i=0;i<input.size();i++){
		alphabetCnt[(int)(input[i])-65]++;
	}
	
	for(int item : alphabetCnt){
		if(item%2!=0){
			oddCnt++;
		}	
	} 
	if(oddCnt>=2){ 	//Ȧ���� 2���̻� ������ �Ӹ���� �Ұ�
		output="I'm Sorry Hansoo";
	}
	else{ //�Ӹ���� ����� 
		for(int i=0;i<26;i++){
			if(alphabetCnt[i]%2!=0){ //Ȧ�����̸� 
				oddChar=(char)i+65;
			}
			for(int j=0;j<alphabetCnt[i]/2;j++){
				word+=(char)i+65;
			}
		}
		output=word;
		reverse(word.begin(),word.end());
		if(oddCnt==1){
			output+=oddChar;
		} 
		output+=word;
		
	}
	cout<<output;

	
}
