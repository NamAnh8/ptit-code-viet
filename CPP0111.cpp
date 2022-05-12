#include<iostream>
#include<math.h>
#include<string>
using namespace std;
//5654345676
void solve(string s){
	int l = s.length();
	int count = 0;
	for(int i = 0; i < l; i++){
		if(s[i] == s[i+1] + 1 || s[i] == s[i+1] - 1){
			count ++;
		}
	}
	if(count == l - 1){
		cout <<"YES";
	}else{
		cout <<"NO";
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
