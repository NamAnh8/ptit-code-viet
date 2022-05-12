#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
int a[1000];
void sort1(int m, int n){
	for(int i = m; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		prev_permutation(a, a + n);
		for(int i = 0; i < n; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
}
//1 3 2 4 5
//1 2 3 4 5
//1 2 5 4 3
