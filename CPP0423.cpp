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
		int count = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= k){
				count ++;
			}
		}
		int dem = 0;
		for(int i = 0; i < count; i++){
			if(a[i] <= k){
				dem++;
			}
		}
		int d = dem;
		for(int i = count; i < n; i++){
			if(a[i - count] <= k) dem--;
			if(a[i] <= k) dem++;
			d = max(d, dem);
		}
		cout << count - d << endl;
	}
}
