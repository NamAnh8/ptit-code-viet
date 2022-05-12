#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, m;
		cin >> n >> m;
		long long a[n]; long long b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + m);
		long long product = a[n - 1] * b[0];
		cout << product << endl;
	}
}
