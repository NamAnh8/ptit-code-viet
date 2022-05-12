#include <iostream>
#include <string>
#include <math.h>
#include <set>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		if(s.length() < 26){
			cout <<"0"<< endl;
		}
		set<char>ss;
		for(auto x : s){
			ss.insert(x);
		}
		if(26 - ss.size() <= k){
			cout <<"1"<< endl;
		}else{
			cout <<"0"<< endl;
		}
	}
}
