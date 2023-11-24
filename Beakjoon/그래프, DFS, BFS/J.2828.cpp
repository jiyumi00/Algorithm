#include<iostream>
using namespace std;

int ret;
int n,m,j,r,l,temp;
int main(){
	cin>>n>>m;
	cin>>j;
	l=1;
	for(int i=0;i<j;i++){
		r=l+m-1;
		cin>>temp;
		if(l<=temp && r>=temp) continue;
		else if(l<temp){
			ret+=temp-r;
			l+=temp-r;
		}
		else{
			ret+=l-temp;
			l=temp;
		}
	}
	cout<<ret<<'\n';
	
}
