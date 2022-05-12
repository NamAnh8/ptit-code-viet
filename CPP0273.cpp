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
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		int l = 0;
		int r = 0;
		int count = 0;
		for(int i = 0; i < n; i++){
			sum -= a[i];
			int r = sum;
			if(l == r){
				cout << i + 1;
				count ++;
				break;
			}
			l += a[i];
		}
		if(count == 0){
			cout << "-1";
		}
		cout << endl;
	}
}
