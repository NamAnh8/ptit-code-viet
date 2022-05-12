#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int b[10000] = {0};
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		if(b[x] >= 1){
			cout << "1";
		}else{
			cout << "-1";
		}
		cout << endl;
	}
}
