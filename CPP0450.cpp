#include <iostream>
#include <set>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1];
		for(int  i = 1; i <= n; i++){
			cin >> a[i];
		}
		set<int> se;
		int ans = 0;
		for(int i = 1; i <= n; i++){
			se.insert(a[i]);
			if(i - se.size() == 1){
				ans = i;
				break;
			}
		}
		if(se.size() == n){
			cout << "-1";
		}else{
			cout << a[ans];
		}
		cout << endl;
	}
}
