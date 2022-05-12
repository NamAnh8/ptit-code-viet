#include <iostream>
#include <math.h>
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
		int sum = 0;
		for(int i = 0; i < n; i++){
			int m = k - a[i];
			for(int j = i + 1; j < n; j++){
				if(a[j] == m){
					sum ++;
				}
			}
		}
		cout << sum << endl;
	}
}
