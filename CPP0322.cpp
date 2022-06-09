#include <iostream>
#include <math.h>
#include <string>
using namespace std;
string Sum(string a, string b){
	string sum;
	int num = 0;
	while(a.length() > b.length()){
		b = '0' + b;
	}
	while(a.length() < b.length()){
		a = '0' + a;
	}
	for(int i = a.size() - 1; i >= 0; i--){
		num = (a[i] - '0') + (b[i] - '0') + num;
		sum = char((num % 10) + '0') + sum;
		num /= 10;
	}
	if(num == 1){
		sum = '1' + sum;
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << Sum(s1, s2) << endl;
	}
}
