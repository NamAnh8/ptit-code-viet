#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;
struct SinhVien{
    string id;
    string name, Class ,birth;
    float GPA;
};
void nhap(SinhVien &p){
    getline( cin, p.name);
    cin >> p.Class;
    cin >> p.birth;
    cin >> p.GPA;
    p.id ="B20DCCN001";
    if( p.birth[1] = '/'){
        p.birth = "0" + p.birth;
    }
    if( p.birth[4] =='/'){
        p.birth.insert(3, "0");
    }
}
void in(SinhVien p){
    cout << p.id << " " << p.name << " " << p.Class << " " << p.birth << " " << setprecision(2) << fixed << p.GPA <<endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
