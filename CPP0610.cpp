#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu, ll mau);
		friend ostream& operator << (ostream&, PhanSo);
		friend istream& operator >> (istream&, PhanSo &);
		void rutgon();
		friend PhanSo operator + (PhanSo, PhanSo);
};
PhanSo::PhanSo(ll tu, ll mau){
	this -> tu = tu;
	this -> mau = mau;
}
ostream& operator << (ostream& out, PhanSo a){
	out << a.tu <<"/"<< a.mau;
	return out;
}
istream& operator >> (istream& in, PhanSo &a){
	cin >> a.tu >> a.mau;
	return in;
}
void PhanSo::rutgon(){
	ll n = __gcd(tu, mau);
	tu /= n;
	mau /= n;
}
PhanSo operator + (PhanSo q, PhanSo p){
	PhanSo tong(1,1);
	tong.tu = q.tu * p.mau + q.mau *p.tu ;
	tong.mau = q.mau * p.mau;
	ll n = __gcd(tong.tu, tong.mau);
	tong.tu /= n;
	tong.mau /= n;
	return tong;
}
int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
