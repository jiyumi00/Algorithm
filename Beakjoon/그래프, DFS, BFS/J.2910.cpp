#include<bits/stdc++.h>
using namespace std;

bool isVisible;
int n,c,num,cnt;
vector<int>rate;
map<int,int>m;
int main(){
	cin>>n>>c;
	
	for(int i=0;i<n;i++){
		cin>>num;
		isVisible=0;
		for(auto it=m.begin();it!=m.end();it++){
			if(m.find(num)!=m.end()){
				isVisible=1;
				cnt=m.at(num);
				break;
			}
		}
		if(isVisible==1){
			cnt++;
			m[num]=cnt;
		}
		else{
			m.insert({num,1});
			rate.push_back(num);
		}
		
	}
	cout<<"-------map-------"<<'\n'; 
	for(int item:rate){
		
	}
	for(auto it=m.begin();it!=m.end();it++){
		
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<"-------rate-------"<<'\n';
	for(int item:rate){
		cout<<item<<"\n";
		for(auto it=m.begin();it!=m.end();it++){
			
			if(m.find(item)!=m.end()){
				for(int i=0;i<it->second;i++){
					cout<<it->first<<" ";
				}
			}
		}
	}
	
	
	

}
