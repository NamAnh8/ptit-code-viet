#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, int>mp;
		for(auto x : s){
			mp[x]++;
		}
		ll ans = s.length();
		for(auto x : mp){
			ans += x.second * (x.second - 1) / 2;
		}
		cout << ans << endl;
	}
}
