#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
void solve(int n){
	//3
	//1 + 1.2 + 1.2.3
	ll fact, sum = 0;
	for(int i = 1; i <= n; i++){
		fact = 1;
		for(int j = 1;j <= i; j++){
			fact = fact * j;
		}
		sum += fact;
	}
	cout << sum;
}
int main(){
	ll n;
	cin >> n;
	solve(n);
}
