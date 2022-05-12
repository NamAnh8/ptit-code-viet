#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void solve1(string s1, string s2){
	for(char &x : s1){
		if(x == '5') x = '6';
	}
	for(char &x : s2){
		if(x == '5') x = '6';
	}
	cout << stoll(s1) + stoll(s2) ;
}
void solve2(string s1, string s2){
	for(char &x : s1){
		if(x == '6') x = '5';
	}
	for(char &x : s2){
		if(x == '6') x = '5';
	}
	cout << stoll(s1) + stoll(s2) ;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		solve2(s1, s2);
		cout <<" ";
		solve1(s1, s2);
		cout << endl;
    }
}
