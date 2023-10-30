#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int testCnt,clothesCnt;
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
		
		if(clothes.size()==1){
			cout<<clothesCnt<<'\n';
		}
		else{
			int multi=1;
			for(auto it=clothes.begin();it!=clothes.end();++it){
				multi*=it->second;
			}
			cout<<clothesCnt+multi<<'\n';
		}
		
		clothes.clear();	
	}

}
