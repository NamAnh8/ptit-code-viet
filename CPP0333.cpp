#include <bits/stdc++.h>
using namespace std;
void Upper(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}
}
void Normal(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	string s;
	getline(cin, s);
	string temp;
	stringstream ss(s);
	vector<string> v;
	while(ss >> temp){
		v.push_back(temp);
	}
	for(int i = 0; i < v.size() - 1; i++){
		Normal(v[i]);
		cout << v[i];
		if(i == v.size() - 2){
			cout << ", ";
		}else{
			cout << " ";
		}
	}
	Upper(v[v.size() - 1]);
	cout << v[v.size() - 1];
}
