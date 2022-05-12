#include <iostream>
#include <math.h>
#include <limits.h>
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
		sort(a, a + n);
		int comp = INT_MAX;
		for(int i = 1; i < n; i++){
			comp= min(comp, a[i] - a[i - 1]);
		}
		cout << comp << endl;
	}
}
