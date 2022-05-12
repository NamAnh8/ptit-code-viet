#include<iostream>
#include<math.h>
using namespace std;
//12321
//888888
//777777
//123321
void solve(string s){
	int count = 0;
	int l = 0;
	int r = s.length() - 1;
	while(l < r){
		if(s[l] != s[r]){
			count ++;
		}
		l++;
		r--;
	}
	if(s.length() % 2 == 0 && count == 0){
		cout << "YES";
	}
	else if(s.length() % 2 == 1 && count == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
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
