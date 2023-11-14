#include<bits/stdc++.h>
using namespace std;

int a[10][10];
int ret[10];
int testCase,output;


void check(){
	for(int j=1;j<=9;j++){
		if(ret[j]==2 || ret[j]==0){
			output=0;
			break;
		}
		else{
			output=1;
		}
	}
}
void go(int x,int y){
	for(int j=1;j<=9;j++){
		ret[j]=0;
	}
	for(int i=x;i<x+3;i++){
		for(int j=y;j<y+3;j++){
			ret[a[i][j]]++;
		}
	}
	check();
} 
int main(){
	cin>>testCase;
	
	for(int t=1;t<=testCase;t++){
		output=0;
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cin>>a[i][j];
			}
		}
		//1단계 통과 
		for(int i=0;i<9;i++){
			for(int j=1;j<=9;j++){
				ret[j]=0;
			}
			for(int j=0;j<9;j++){
				ret[a[i][j]]++;
			}
			check();
			if(output==0){
				break; 
			}
		}
		//2단계 통과
		if(output==1){
			for(int i=0;i<9;i++){
				for(int j=1;j<=9;j++){
					ret[j]=0;
				}
				for(int j=0;j<9;j++){
					ret[a[j][i]]++;
				}
				check();
				if(output==0){
				break; 
				}
			}
		}
	
		
		//3단계 통과
		if(output==1){
			for(int i=0;i<=6;i+=3){
				if(output==0){
					break; 
				}
				for(int j=0;j<=6;j+=3){
					go(i,j);
					if(output==0){
						break; 
					}
				}
				
			}
		}
	
		cout<<"#"<<t<<" "<<output<<'\n';
	
	}
}
