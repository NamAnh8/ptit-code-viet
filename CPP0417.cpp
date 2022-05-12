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
		int b[n] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a + n);
		//10 12 20 30 25 40 32 31 35 50 60
		//10 12 20 25 30 31 32 35 40 50 60
		//4 9
		int ans1 = 0;
		int ans2 = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
			    ans1 = i;
				break;	
			}
		}
		for(int i = n - 1; i >= 0; i--){
			if(a[i] != b[i]){
				ans2 = i;
				break;
			}
		}
		cout << ans1 + 1 <<" "<< ans2 + 1 <<endl;
	}
}
