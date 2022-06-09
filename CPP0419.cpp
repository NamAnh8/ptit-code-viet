#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set <int> se1;
		set <int> se2;
		set <int> se3;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se1.insert(a[i]);
			se3.insert(a[i]);
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			se2.insert(b[i]);
			se3.insert(b[i]);
		}
		for(auto x : se3){
			cout << x <<" ";
		}
		cout << endl;
		for(auto x : se1){
			if(se2.find(x) != se2.end()){
				cout << x <<" ";
			}
		}
		cout << endl;
	}
}
