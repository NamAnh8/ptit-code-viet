#include<iostream>
#include<math.h>
using namespace std;
bool sphenic(int n){
    int res=0;
    for(int i=2;i<=sqrt(n);i++){
        int plus=0;
        while(n%i==0){
            plus++;
             n/=i;
        }
        if(plus>=2) return 0;
        if(plus==1) res++;
    }
    if(n!=1)
        res++;
    return res==3;
}
int main(){
    unsigned int t;
    cin>>t;
    unsigned int n;
    for(int i=1;i<=t;i++){
        cin>>n; 
        cout<<sphenic(n)<<endl;
    }
}
