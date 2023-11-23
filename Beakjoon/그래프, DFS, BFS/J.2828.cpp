#include<iostream>
using namespace std;

int ret;
int n,m,j,index,lastIndex=1;
int main(){
	cin>>n>>m;
	cin>>j;
	
	for(int i=0;i<j;i++){
		cin>>index;
		if(lastIndex<index){
			for(int j=lastIndex;j<index-(m-1);j++){
				ret++;
			}
			lastIndex=index-(m-1);
		}
		else if(lastIndex>index){
			for(int j=index;j<lastIndex;j++){
				ret++;
			}
			lastIndex=index;
		}
		else{
			continue;
		}
	}
	cout<<ret<<'\n';
	
}
