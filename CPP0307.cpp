#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <math.h>
using namespace std;
set<string> solve(string s){
	stringstream ss(s);
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
	while(t--){
		scanf("\n");
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		set<string> se1 = solve(s1);
		set<string> se2 = solve(s2);
		for(string x : se1){
			if(se2.find(x) == se2.end()){
				cout << x <<" ";
			}
		}
		cout << endl;
	}
}
