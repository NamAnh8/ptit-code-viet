#include <iostream>
#include <math.h>
using namespace std;
int solve(int a,int b){
	for(int i = 0; i < b; i++){
		if((a * i) % b == 1){
			return i;
		}
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}
}
