#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testCnt,clothesCnt,multi=1;
	string name,kind;
	map<string,int>clothes;
	
	cin>>testCnt;
	for(int i=0;i<testCnt;i++){
		cin>>clothesCnt;
		
		for(int i=0;i<clothesCnt;i++){
			cin>>name>>kind;
			if(clothes.find(kind)!=clothes.end()){
				clothes[kind]++;
			}
			else{
				clothes.insert({kind,1});
			}
		}
		
		for(auto iter : clothes){
			multi*=iter.second+1;
		}
		cout<<multi-1<<'\n';
		multi=1;
		clothes.clear();	
	}

}
