#include <iostream>
#include <math.h>
#include <string>
using namespace std;
long long solve(string s){
	int sum = 0;
	for(int i = 0; i < s.length(); i++){
		sum += s[i] - '0';
	}
	if(sum <= 9){
		return sum;
	}else{
		string str = to_string(sum);
		return solve(str);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(solve(s) == 9){
			cout << "1";
		}else{
			cout <<"0";
		}
		cout << endl;
	}
}
