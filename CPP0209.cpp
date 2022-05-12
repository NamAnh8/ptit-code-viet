#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		while(m--){
			int l, r;
			cin >> l >> r;
			int tong = 0;
			for(int i = l; i <= r; i++){
				tong += a[i];
			}
			cout << tong << endl;
		}
		cout << endl;
	}
}
