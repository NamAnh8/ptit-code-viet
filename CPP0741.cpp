#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long x, y, p;
		cin >> x >> y >> p;
		long long pro = 1;
		for(int i = 0; i < y; i++){
			pro = (pro * x) % p;
		}
		cout << pro <<endl;
	}
}
