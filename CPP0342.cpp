#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<char> v;
		int sum = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				v.push_back(s[i]);
			}else if(s[i] >= '0' && s[i] <= '9'){
				sum += s[i] - '0';
			}
		}
		sort(v.begin(), v.end());
		for(auto x : v){
			cout << x;
		}
		cout << sum;
		cout << endl;
	}
}
