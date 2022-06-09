#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	// 1 2 3 4 5 6 7
	// 1 5 2 6 3 7 4
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int l = 0, r = n - 1;
		double h = (double)n / 2;
		int m = ceil(h);
		//1 3 2
		//1 2 3
		// 1 2 3 4 5 6 7
	// 1 5 2 6 3 7 4
	// 1 2 2 1
	// 1 1 2 2 
	// 1 2 1 2
	int q = m;
		while(l < q && m <= r ){
			cout << a[l] << " ";
			l++;
			cout << a[m] << " ";
			m++;
		}
		while(l < q){
			cout << a[l];
			break;
		}
		cout << endl;
	}
}
