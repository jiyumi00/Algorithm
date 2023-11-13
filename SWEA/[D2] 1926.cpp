#include<iostream>
using namespace std;

int n;
void check(int num){
	if(num==3 || num==6 || num==9){
		cout<<"-";
	}
	else{
		cout<<num;
	}
}
int main(){
	cin>>n;
	
	for(int i=1;i<=n;i++){
	 	if(i>=10 && i<100){
	 		check(i/10);
	 		check(i%10);
		} 
		else if(i>=100 && i<1000){
			check(i/100);
			check((i%100)/10);
			check((i%100)%10);
		}
		else{
			check(i);
		}
		cout<<" ";
	}
}
