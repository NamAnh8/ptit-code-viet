#include <iostream>
#include <math.h>
using namespace std;
int n, k, a[1005], last;
void KhoiTao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		last = 0;
	}else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		KhoiTao();
		last = 1;
		while(last){
			for(int i = 1; i <= k; i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
