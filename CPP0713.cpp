#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int n, a[1005], last;
void KhoiTao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0){
		last = 0;
	}else{
		int j = n;
		while(a[i] > a[j]){
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1;
		int r = n;
		while(l < r){
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		KhoiTao();
		last = 1;
		while(last){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
