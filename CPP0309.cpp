#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		scanf("\n");
		getline(cin, s);
		int sum = 0;
		stringstream ss(s);
		string temp;
		while(ss >> temp){
			sum++;
		}
		cout << sum << endl;
	}
}
