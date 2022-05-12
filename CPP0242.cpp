#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		int max = 1; 
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		// 0 1 0 0 0 0
		// 1 0 1 0 0 1
		for(int i = 0; i < n; i++){
			int sum1 = 0;
			int sum2 = 0;
			for(int j = i; j < n; j++){
				sum1 += a[j];
				sum2 += b[j];
				if(sum1 == sum2 ){
					int len = j - i + 1;
					if(len > max){
						max = len;
					} 
				}
			}
		}
		cout << max << endl;
	}
}
