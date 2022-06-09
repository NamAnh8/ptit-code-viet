#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int solve(string s){
	int n = s.length();
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string v;
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] -= 32;
			}
			if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C'){
				v.push_back(2);
			}
			if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F'){
				v.push_back(3);
			}
			if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I'){
				v.push_back(4);
			}
			if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L'){
				v.push_back(5);
			}
			if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O'){
				v.push_back(6);
			}
			if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S'){
				v.push_back(7);
			}
			if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V'){
				v.push_back(8);
			}
			if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z'){
				v.push_back(9);
			}
		}
		if(solve(v)){
			cout << "YES";
		}else{
			cout << "NO";
		}
		cout << endl;
	}
}
