#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long cnt[100001] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			cnt[a[i]]++;
			//4 5 1 2 1
		}
		int sum = 0;
		for(int i =0; i < n; i++){
			if(cnt[a[i]] >= 2){
				sum += cnt[a[i]];
				cnt[a[i]] = 0;
			}
		}
		cout << sum;
		cout << endl;
	}
}
