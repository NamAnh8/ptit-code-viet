#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i =0; i < n; i++){
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n);
		int i = 0; int j = 0;
		int count = 0, c[n + m];
		while(i < n && j < m){
			if(a[i] <= b[j]){
				c[count] = a[i];
				i++;
			}else{
				c[count] = b[j];
				j++;
			}
			count ++;
		}
		while(i < n){
			c[count++] = a[i++];
		}
		while(j < m){
			c[count++] = b[j++];
		}
		for(int i = 0; i < n + m; i++){
			cout << c[i] <<" ";
		}
		cout << endl;
	}
}
