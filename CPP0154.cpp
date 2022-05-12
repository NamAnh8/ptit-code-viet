#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
ll solve(ll n, ll k){
	ll sum = 0;
	for(int i = 0; i <= n; i++){
		sum += i % k;
	}
	if(sum == k){
		return 1;
	}
	else return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << solve(n, k) << endl;
	}
}
