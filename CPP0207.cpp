#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, d;
		cin >> n >> d;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = d; i < n; i++){
			cout << a[i] <<" ";
		}
		for(int j = 0; j < d; j++){
			cout << a[j] <<" ";
		}
		cout << endl;
	}
}
