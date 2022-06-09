#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		multiset<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			int sum = k + a[i];
			if(se.find(sum) != se.end()){
				ans = 1;
				break;
			}else{
				ans = 0;
			}
		}
		if(ans == 1){
			cout << "1";
		}else{
			cout << "-1";
		}
		cout << endl;
	}
}
