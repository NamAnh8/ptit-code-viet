#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		int h[n] = {0};
		int c[m] = {0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				if(a[i][j] == 1){
					h[i] = 1;
					c[j] = 1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			if(h[i] == 1){
				for(int j = 0; j < m; j++){
					a[i][j] = 1;
				}
			}
		}
		for(int j = 0; j < m; j++){
			if(c[j] == 1){
				for(int i = 0; i < n; i++){
					a[i][j] = 1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] <<" ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
