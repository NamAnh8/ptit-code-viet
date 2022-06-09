#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int n, k, b;
	cin >> n >> k >> b;
	int a[100001] = {0};
	for(int i = 1; i <= b; i++){
		int x;
		cin >> x;
		a[x] = 1;
	}
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += a[i];
	}
	int tong = sum;
	for(int i = k + 1; i <= n; i++){
		sum -= a[i - k];
		sum += a[i];
		tong = min(tong, sum);
	}
	cout << tong;
}
