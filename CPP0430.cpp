#include <iostream>
#include <math.h>
#include <set>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		set<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		sort(a, a + n);
		//4 5 3 8 6
		// 1 3 5 6
		// 1 1 3 4
		// 1 1 1 3 4
		// 1 3 4
		//3 4 5 6 8
		int m = a[n - 1] - a[0] - se.size() + 1 ;
		cout << m << endl;
	}
}
