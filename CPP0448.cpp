#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int b[10000] = {};
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		if(b[k] == 0){
			cout <<"-1";
		}else{
			cout << b[k];
		}
		cout << endl;
		
	}
}
