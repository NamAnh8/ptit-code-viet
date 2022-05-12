#include<iostream>
#include<math.h>
using namespace std;
int CheckSNT(int n){
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
        int n;
        cin >> n;
        int flag =0;
        for(int i=0; i<n; i++){
            int b=n-i;
            if(CheckSNT(i) && CheckSNT(b)){
                flag++;
                cout << i <<" "<<b<<endl;
                break;
            }
        }
        if(flag==0){
            cout << -1 <<endl;
        }
    }
}
