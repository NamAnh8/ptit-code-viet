#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;
set<string> solve(string s){
	stringstream(ss);
	string temp;
	set <string> se;
	while(ss >> temp){
		se.insert(temp);
	}
	return se;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		set<string> se1 = solve(s1);
		set<string> se2 = solve(s2);
		for(auto x : se1){
			if(se1.find(x) == se.end()){
				cout << x <<" ";
			}
		}
		cout << endl;
	}
}
