#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int count[100002];
		int n;
		cin >> n;
		int a[n];
		memset(count, 0, sizeof(count));
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > 0){
				count[a[i]] = 1;
			}
		}
		for(int i = 1; i <= 1000001; i++){
			if(count[i] == 0){
				cout << i ;
				break;
			}
		}
		cout << endl;
	}
}
