#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int tang(int n){
	int a = n % 10;
	n /= 10;
	while(n > 0){
		if( a <= n % 10){
			return 0;
		}
		a = n % 10;
		n /= 10;
	}
	return 1;
}
int giam(int n){
	int a = n % 10;
	n /= 10;
	while(n > 0){
		if( a >= n % 10){
			return 0;
			break;
		}
		a = n % 10;
		n /= 10;
	}
	return 1;
}
int snt(int n){
	if(n < 2) return 0;
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
		int n,d=0,dau=1,cuoi=1; 
		cin>>n; int i=1; 
		while (i<n) { 
		    dau*=10; i++;
		} 
		i=1; 
		while (i<n+1) { 
		    cuoi*=10; i++; 
		} 
		for (int j=dau; j<cuoi; j++) { 
		    if (tang(j) || giam(j)) { 
			    if (snt(j)) d++; 
			} 
		} 
		cout<<d<<endl; 
	}
}
