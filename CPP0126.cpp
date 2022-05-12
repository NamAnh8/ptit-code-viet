#include <iostream>
#include <math.h>
using namespace std;
int checksonguyento(int n){
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
	int t;
	cin >> t;
	while(t--){
		int a, b, max, min;
	    cin >> a >> b;
	    if(a > b){
		    max = a;
		    min = b;
	    }else {
		    min = a;
		    max = b;
	    }
	    for(int i = min; i <= max; i++){
		    if(checksonguyento(i)){
			    cout << i <<" ";
		    }
	    }
	    cout << endl;
	}
}
