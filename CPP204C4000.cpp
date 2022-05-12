#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
struct SinhVien{
	string id, name, lop, birth;
	double gpa;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin, a.name);
	cin >> a.lop >> a.birth >> a.gpa;
	a.id = "N20DCCN001";
	if( a.birth[1] = '/'){
        a.birth = "0" + a.birth;
    }
    if( a.birth[4] =='/'){
        a.birth.insert(3, "0");
    }
}
void inThongTinSV(SinhVien &a){
	cout << a.id <<" "<< a.name <<" " << a.lop <<" " << a.birth <<" "<< setprecision(2) << fixed << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
