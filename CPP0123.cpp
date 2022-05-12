#include <iostream>
#include <math.h>
using namespace std;
int a[1000001];
int checksonguyento(long long  n){
	if(n<=1) return 0;
	int count=0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			count++;
		}
	}
	if(count>=1) return 0;
	if(count==0) return 1;
}
int main(){
	long long n;
	cin >> n;
	if(checksonguyento(n)){
		cout <<"YES";
	}else{
		cout <<"NO";
	}
}
