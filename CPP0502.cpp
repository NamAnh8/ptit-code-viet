#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
struct ThiSinh
{
    string name, birth;
    double sub1, sub2, sub3;
};
void nhap(ThiSinh &p){
    getline( cin, p.name);
    cin >> p.birth;
    cin >> p.sub1;
    cin >> p.sub2;
    cin >> p.sub3;
}
void in(ThiSinh p){
    cout << p.name << " " << p.birth << " " << setprecision(1) << fixed << p.sub1 + p.sub2 + p.sub3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
