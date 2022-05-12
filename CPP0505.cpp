#include <iostream>
#include <math.h>
#include <string>
using namespace std;
struct NhanVien{
    string id = "00001";
    string name, birth, gender, address, date;
    string number;
};
void nhap( NhanVien &p){
    getline( cin, p.name);
    cin >> p.gender;
    cin >> p.birth;
    cin.ignore();
    getline ( cin, p.address);
    cin >> p.number;
    cin >> p.date;
}
void in( NhanVien p){
    cout << p.id <<" " << p.name << " " << p.gender << " " << p.birth << " " << p.address << " " << p.number << " " << p.date << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
