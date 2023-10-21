#include<bits/stdc++.h>
using namespace std;

int main(){
	char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
	'p','q','r','s','t','u','v','w','x','y','z'};
	char input[100];
	int cnt=0;
	vector<char>alphabetCount;
	
	
	cin>>input;
	cout<<sizeof(input)<<'\n';
	for(int i=0;i<26;i++){
		cnt=0;
		for(int j=0;j<100;j++){
			if(alphabet[i]==input[j]){
				cnt++;
			}
		}
	
		alphabetCount.push_back(cnt);
		
	}
	
	for(int i:alphabetCount){
		cout<<i<<" ";
	}
}
