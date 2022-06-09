#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
//		2
//
//4
//
//1  5  2  7
//
//6
//1  3  2  7  9  8
//1 5 2 7 8
// 1 2 5 7 8
		sort(a, a + n);
		int l = 0, r = n - 1;
		while(l < r){
			cout << a[r] <<" ";
			r--;
			cout << a[l] <<" ";
			l++;
		}
		if(n % 2 == 1){
			cout << a[n / 2];
		}
		cout << endl;
	}
}
