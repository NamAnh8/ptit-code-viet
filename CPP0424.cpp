#include <iostream>
#include <math.h>
#include <set>
using namespace std;
void solve(){
	int n, k;
	cin >> n >> k;
	int a[n * k];
	for(int i = 0; i < n * k; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n * k -1; i++){
		for(int j = i + 1; j < n * k; j++){
			if(a[i] > a[j]){
				int temp = a[i];
			    a[i] = a[j];
			    a[j] = temp;
			}
		
		}
	}
	for(int i = 0; i < n * k; i++){
		cout << a[i] << " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
