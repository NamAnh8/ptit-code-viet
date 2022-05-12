#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
ll CheckSNT(ll n){
    if(n<=1) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        if(n % 2 ==0){
            for(int i=0; i<n; i++){
                ll b=n-i;
                if(CheckSNT(i) && CheckSNT(b)){
                    cout << i <<" "<<b<<endl;
                    break;
                }
            }
		}
		else {
		    if (CheckSNT(n - 2)) {
		        cout << 2 << " " << n - 2 << endl;
		    }
		}
    }
}
