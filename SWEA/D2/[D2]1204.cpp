#include<iostream>
using namespace std;
int testCase,testNumber,score,maxNum=0,maxScore;
int scores[101];
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		for(int i=0;i<=100;i++){
                scores[i]=0;
            }
            maxScore=0; maxNum=0;
            cin>>testNumber;
            for(int j=0;j<1000;j++){
                cin>>score;
                scores[score]++;
            }
            for(int j=0;j<=100;j++){
                if(maxNum<scores[j]){
                    maxNum=scores[j];
                    maxScore=j;
                }
                else if(maxNum==scores[j]){
				if(maxScore<j){
					maxScore=j;
				}
			}
        }
		cout<<"#"<<testNumber<<" "<<maxScore<<'\n';

	}
	return 0;
}
