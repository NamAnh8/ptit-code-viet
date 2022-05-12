#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		//1 1 1 2 3 4
		// 6 3
		// 3 4 7 10 15 20
		// 5 6 7 8 9 12
		sort(a, a + n);
		int count = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == a[i + 1]){
				count ++;
			}
		}
		cout << a[ k - 1  ] << endl;
	}
}
