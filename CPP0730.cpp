#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		int a[n];
		int cons = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] < 0){
				cons++;
			}
		}
		ll sum = 0;
		ll tong = -1e9;
		//-2, -3, 4, -1, -2, 1, 5, -3
		for(int i = 0; i < n; i++){
			sum += a[i];
			tong = max(sum, tong);
			if(sum < 0) sum = 0;
		}
		if(cons == n){
			cout <<"-1";
		}else{
			cout << tong;
		}
		cout << endl;
	}
}
