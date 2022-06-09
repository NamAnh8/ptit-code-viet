#include <iostream>
#include <math.h>
#include <string>
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
		for(int i = 0; i < n; i++){
			int ans = 0;
			if(i == 0){
				ans = a[i] * a[i + 1];
			}else if(i == n - 1){
				ans = a[i] * a[i - 1];
			}else{
				ans = a[i - 1] * a[i + 1];
			}
			cout << ans <<" ";
		}
		cout << endl;
	}
}
