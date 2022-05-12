#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
int recursion(int n){
	ll tong = 0;
	ll a;
	while(n != 0){
		a = n % 10;
		tong += a;
		n = n / 10;
	}
	if(tong <= 9){
		return tong;
	}else if(tong >=10){
		return recursion(tong);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << recursion(n) << endl;
	}
}
