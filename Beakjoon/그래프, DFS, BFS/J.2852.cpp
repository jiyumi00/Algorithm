#include<bits/stdc++.h>
using namespace std;

string goalTime,preTime,first,second;
int teamNumber,A,B,asum,bsum,n;

string print(string number,int minute,int second){
	
	if(minute<10){
		number='0';
	}
	number+=to_string(minute);	

	number+=":";
	if(second<10){
		number+='0';
	}
	number+=to_string(second);
	return number;
}
int changeToInt(string s){
	return atoi(s.substr(0,2).c_str())*60+atoi(s.substr(3,2).c_str());
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>teamNumber>>goalTime;
		
		if(A>B){ //AÆÀÀÌ ÀÌ°åÀ» ¶§ 
			asum+=(changeToInt(goalTime)-changeToInt(preTime));
		}
		else if(B>A){//BÆÀÀÌ ÀÌ°åÀ» ¶§ 
			bsum+=(changeToInt(goalTime)-changeToInt(preTime));
		}
		teamNumber==1?A++:B++;
		preTime=goalTime;
	}
	if(A>B) asum+=(changeToInt("48:00")-changeToInt(preTime));
	else if(B>A) bsum+=(changeToInt("48:00")-changeToInt(preTime));
	
	cout<<print(first,asum/60,asum%60)<<'\n';
	cout<<print(second,bsum/60,bsum%60)<<endl;
}
