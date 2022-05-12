#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
long long lcm(long long a, long long b){
	return (a * b) / __gcd(a, b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a = 1;
		for(long long i = 2; i <= n; i++){
			a = lcm(a, i);
		}
		cout << a << endl;
	}
}
