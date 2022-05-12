#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
struct PhanSo{
    ll tu,mau;
};
void nhap (PhanSo &p){
    cin >> p.tu >> p.mau;
}
void rutgon (PhanSo &p){
    ll solve = gcd( p.tu, p.mau);
    p.tu /= solve;
    p.mau /= solve;
}
void in (PhanSo p){
    cout << p.tu <<"/" <<p.mau;
}
int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
