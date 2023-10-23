#include<bits/stdc++.h>
using namespace std;

int main(){
	int fileCnt,position,startCheck=0,endCheck=0;
	string pattern,fileName,startPtn,endPtn;
	string separator="*";
	
	cin>>fileCnt;
	cin>>pattern;
	
	position=pattern.find(separator,0);
	
	//startPtn, endPtn 저장
	for(int i=0;i<position;i++){
		startPtn+=pattern[i];
	}
	for(int i=position+1;i<pattern.size();i++){
		endPtn+=pattern[i];
	}
	
	for(int i=0;i<fileCnt;i++){
		cin>>fileName;
		//반례 찾기!!! 
		if(startPtn.size()+endPtn.size()>fileName.size()){
			startCheck=0;
			endCheck=0;
		}
		else{
			for(int i=0;i<startPtn.size();i++){
				if(fileName[i]!=startPtn[i]){
					startCheck=0;
					break;
				}
				else{
					startCheck=1;	
				}	
			}
		
			for(int i=0;i<endPtn.size();i++){
				if(fileName[fileName.size()-endPtn.size()+i]!=endPtn[i]){
					endCheck=0;
					break;
				}
				else{
					endCheck=1;
				}
			}
		
		}
	
		if(startCheck==1 && endCheck==1){
			cout<<"DA\n";
		}
		else{
			cout<<"NE\n";
		}
	}

}
