#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
ll solve(ll n){
	ll count = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n != 1){
				if(i % 2 == 0){
					count ++;
				}
				n /= i;
			}
		}
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll m = solve(n);
		cout << m << endl;
	}
}
