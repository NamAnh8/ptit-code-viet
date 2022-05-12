#include <iostream>
#include <math.h>
#include <string>
#include <map>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map <char, int> mp;
		for(char x : s){
			mp[x] ++;
		}
		int count = 0;
		// aaaabcd
		for(auto it : mp){
			if(it.second > s.length() - it.second + 1){
				count ++;
			}
		}
		if(count == 1){
			cout << "0";
		}else{
			cout << "1";
		}
		cout << endl;
	}
}
