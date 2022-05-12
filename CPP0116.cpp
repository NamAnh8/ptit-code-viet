#include <iostream>
#include <math.h>
using namespace std;
int prime(int n ){
	for(int  i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
void solve1(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i ==0){
			cout << i ;
			break;
		}
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[10000];
		int m = 1;
		while(m <= n && m > 0){
			if(prime(m) == 1){
				cout << m;
			}else{
				solve1(m);
			}
			cout <<" ";
			m++;
		}
		cout << endl;
	}
}
