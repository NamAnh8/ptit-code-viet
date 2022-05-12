#include <iostream>
#include <math.h>
using namespace std;
int a[1000001];
void solve(){
	for(int i = 0; i < 1000000; i++){
		a[i]=1;
	}
	a[1] = 0; a[0] = 0;
	for(int i = 2; i < 1000; i++){
		if(a[i]){
			for(int j = i * i; j < 1000000; j+=i){
				a[j] = 0;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	solve();
	while( t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			if(a[i]){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
