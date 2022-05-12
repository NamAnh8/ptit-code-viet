#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int snt(int n){
	if(n <=1 ) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int count = 0;
		for(int i = 1; i <= x; i++){
			if(__gcd(i, x) == 1){
				count ++;
			}
		}
		if(snt(count)){
		    cout << "1";	
		}else{
			cout << "0";
		}
		cout << endl;
	}
}
