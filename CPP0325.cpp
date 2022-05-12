#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int sum = 0;
		int tong = 0;
		for(int i = 0; i < s.length(); i++){
			if(i % 2 == 0){
				sum += s[i] - '0';
			}else{
				tong += s[i] - '0';
			}
		}
		
		if(abs(sum - tong) % 11 == 0){
			cout << "1";
		}else{
			cout << "0";
		}
		cout << endl;
	}
}
