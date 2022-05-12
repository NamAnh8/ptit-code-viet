#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int count = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '0' || s[i] == '6' || s[i] == '8'){
				count++;
			}
		}
		if(count == s.length()){
			cout <<"YES";
		}else{
			cout <<"NO";
		}
		cout << endl;
	}
}
