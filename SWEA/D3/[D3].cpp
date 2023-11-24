#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
using namespace std;

string s;
int a[10];
int testCase;
int main() {
	cin >> testCase;
	for (int t = 1; t <= testCase; t++) {
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			a[i] = s[i];
		}
	}
}
