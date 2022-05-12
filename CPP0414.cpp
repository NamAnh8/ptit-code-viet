#include <iostream>
#include <set>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		set<int> se;
		for(int i = 0; i < n; i++){
			int k = a[i];
			while(k != 0){
				int m = k % 10;
				se.insert(m);
				k /= 10;
			}
		}
		for(auto x : se){
			cout << x << " ";
		}
		cout << endl;
	}
}
