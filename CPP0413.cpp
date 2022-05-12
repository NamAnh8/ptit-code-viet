#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
//7 1 2 3 4 5 6
//1 2 3 4 5 6 7
//s[n - 1 - i]
//s[i]
//7 1 6 2 5 3 4
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[10000]; int b[10000];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int i = 0;
		int j = n -1;
		int chan = -2;
		int le = -1;
		while(i < n/2 || j >= n/2){
			b[chan = chan + 2] = a[j];
			b[le = le + 2] = a[i];
			j--;
			i++;
		}
		for(int i = 0; i < n; i++){
			cout << b[i] <<" ";
		}
		cout << endl;
	}
}
