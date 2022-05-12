#include <iostream>
#include <math.h>
#include <map>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[105][105];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		//2 1 4 3
		//1 2 3 2
		//3 6 2 3
		//5 2 5 3
		int count = 0;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			mp[a[0][i]] = 1;
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < n; j++){
				if(mp[a[i][j]] == i){
					mp[a[i][j]]++;
				}
			}
		}
		for(auto x : mp){
			if(x.second == n){
				count ++;
			}
		}
		cout << count << endl;
	}
}
