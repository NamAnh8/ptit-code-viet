#include <bits/stdc++.h>
using namespace std;

string low(string a){
	for(int i =0; i < a.length(); i++){
		a[i] = tolower(a[i]);
	}
	return a;
}
int main(){
	string s;
	string temp;;
	getline(cin, s);
	vector<string>a;
	stringstream ss(s);
	while(ss >> temp){
		a.push_back(temp);
	}
	int n = a.size();
	cout << low(a[n - 1]);
	for(int i = 0; i < n - 1; i++){
		cout << (char)tolower(a[i][0]);
	}
	cout << "@ptit.edu.vn";
}
