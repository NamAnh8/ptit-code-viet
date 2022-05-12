#include <iostream>
#include <math.h>
#include <string>
using namespace std;
struct NhanVien{
    string id;
    string name, birth, gender, address, date;
    string number;
};
void nhap(NhanVien &p){
    while( p.id.size() < 6){
        p.id += "0";
    }
    cin.ignore();
    getline( cin, p.name);
    cin >> p.gender >> p.birth;
    cin.ignore();
    getline( cin , p.address);
    cin >> p.number >> p.date;
}
void inds(NhanVien p[], int n){
    for(int i = 0; i < n; i++){
        string s = to_string( i + 1);
        while ( s.size() < 5){
            s = "0" + s;
        }
        cout << s <<" "<< p[i].name <<" "<< p[i].gender <<" "<< p[i].birth <<" "<< p[i].address <<" "<< p[i].number <<" "<< p[i].date << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
