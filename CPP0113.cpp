#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void solve(string s){
	int count = 0;
	int l = s.length();
		if(s[l - 1] == '6' && s[l - 2] == '8'){
			count = 1;
		}
	if(count == 1){
		cout <<"1";
	}else{
		cout <<"0";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		solve(s);
		cout << endl;
	}
}
