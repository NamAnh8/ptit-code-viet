#include<iostream>
#include<math.h>
#include<algorithm>
typedef long long ll;
using namespace std;
 ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
ll lcd(ll x,ll y,ll z){
    ll a=(x*y)/(gcd(x,y));
    return (z*a)/(gcd(a,z));
}
ll solve(ll x,ll y,ll z,ll n){
    ll Lcd=lcd(x,y,z);
    ll ndigit=pow(10,n-1);
    ll left=ndigit%Lcd;
    if(left==0)
        return ndigit;
    ndigit+=Lcd-left;
    if(ndigit<pow(10,n))
        return ndigit;
    else
        return 0;
}
int main(){
    ll x,y,z,n,t;
    cin>>t;
    while(t--){
        cin>>x>>y>>z>>n;
        if(0<n<=18){
         ll res=solve(x,y,z,n);
        if(res!=0){
            cout<<res<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    }
}
