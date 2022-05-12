#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		long long a[n];
		set<long long> se;
		for(int i = 0; i < n - 1; i++){
			cin >> a[i];
			se.insert(a[i]);
	    }
	    sort(a, a + n);
	    if(se.size() == 1){
	    	cout <<"-1";
		}else{
			cout << a[0] <<" "<< a[1];
		}
		cout << endl;
    }
}
