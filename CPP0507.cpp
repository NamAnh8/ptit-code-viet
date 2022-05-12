#include <iostream>
#include <math.h>
#include <iomanip>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
struct PhanSo{
    ll tu, mau;
};
void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}
PhanSo tong(PhanSo &p, PhanSo &q){
	p.tu = p.tu * q.mau + p.mau * q.tu;
    p.mau = q.mau * p.mau;
    ll solve = gcd( p.tu, p.mau);
    p.tu /= solve;
    p.mau /= solve;
    return p;
}
void in(PhanSo p){
	cout << p.tu <<"/"<< p.mau;
}

int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
    
}

