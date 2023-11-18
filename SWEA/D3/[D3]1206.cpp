#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int testCase = 10;
vector<int>result;
int a[1004];
int n,maxNum=0,sum=0;
int main() {

	for (int t = 1; t <= testCase; t++) {
		maxNum = 0; sum = 0; 
		fill(&a[0], &a[0] + 1004, 0);
		
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 2; i < n - 2; i++) {
			if (a[i] <= a[i - 1] || a[i] <= a[i - 2] || a[i] <= a[i + 1] || a[i] <= a[i + 2]) {
				continue;
			}

			else {
				maxNum = 0;
				for (int j = i - 2; j <= i + 2; j++) {
					if (j == i) {
						continue;
					}
					if (maxNum < a[j]) {
						maxNum = a[j];
					}

				}
				result.push_back(a[i] - maxNum);
			}
		}

		for (int item : result) {
			sum += item;
		}
		cout <<"#"<<t<<" "<< sum << '\n';
	}
	
	
}