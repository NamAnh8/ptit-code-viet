#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> v;
		int c[100000] = {0};
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			c[a[i]]++;
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(a, a + n);
		for(int i = 0; i < m; i++){
			int d = c[b[i]];
			while(d--){
				v.push_back(b[i]);
				c[b[i]]--;
			}	
		}
		for(int i = 0; i < n; i++){
			if(c[a[i]] != 0){
				v.push_back(a[i]);
			}
		}
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}
