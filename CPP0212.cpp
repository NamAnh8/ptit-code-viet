#include<iostream>
#include<math.h>
const long long mod = 1e9 + 7;
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		long long sum = 0;
		long long p = 1;
		for(int  i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = n - 1; i >= 0; i--){
			sum += a[i] * p;
			sum %= mod;
			p *= x;
			p %= mod;
		}
		cout << sum << endl;
	}
}
