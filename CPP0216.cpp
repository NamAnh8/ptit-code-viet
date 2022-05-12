// +1 -1
//    -1
//    -1 
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int l, r;
		cin >> l >> r;
		int start = l;
		int end = r;
		while(a[start] < a[start + 1] && start < r){
			start ++;
		}
		while(a[end ] < a[end - 1] && end > l){
			end --;
		}
		if(start == end){
			cout <<"Yes";
		}else{
			cout <<"No";
		}
		cout << endl;
	}
}
