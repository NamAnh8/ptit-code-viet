#include <iostream>
#include <math.h>
using namespace std;
long long fb[100];
void sang(){
	fb[0] = 0;
	fb[1] = 1;
	for(int i = 2; i < 93; i++){
		fb[i] = fb[i - 1] + fb[i - 2];
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int count = 0;
		for(int i = 0; i < 93; i++){
			if(n == fb[i]){
				count = 1;
			}
		}
		if(count == 1){
			cout <<"YES";
		}else{
			cout <<"NO";
		}
		cout << endl;
	}
}
