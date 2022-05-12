//n = 2
// 00 01 10 11
#include <iostream>
#include <math.h>
using namespace std;
int n;
int a[100];
int ans;
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void solve(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ans = 0;
	}else{
		a[i] = 1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ans = 1;
		while(ans){
			for(int i = 1; i <= n; i++){
			cout << a[i];
		    }
		    cout << " ";
		    solve();
		}
		cout << endl;
	}
}
