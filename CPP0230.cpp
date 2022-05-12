#include <iostream>
#include <math.h>
#define m 3
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[105][105];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		int tong = 0;
		for(int j = 0; j < m; j++){
			if(a[i][j] == 0 || a[i][j] == 1){
				tong+= a[i][j];
			}
		}
		if(tong >= 2 && tong <= 3){
			ans ++;
		}
	}
	cout << ans << endl;
}
