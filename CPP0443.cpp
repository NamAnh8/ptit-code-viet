#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int min = 1;
		for(int i = 0; i < n - 1; i++){
			cin >> a[i];
			if(a[i] < 0) a[i] = 0;
			if(a[i] == min) min++;
		}
		cout << min << endl;
	}
}
