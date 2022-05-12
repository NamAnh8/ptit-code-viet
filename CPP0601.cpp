#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;
class SinhVien{
	public:
        string id;
        string name, Class ,birth;
        float GPA;
        void nhap(){
            getline( cin, name);
            cin >> Class;
            cin >> birth;
            cin >> GPA;
            id ="B20DCCN001";
            if( birth[1] == '/'){
                birth = "0" + birth;
            }
            if( birth[4] == '/'){
                birth.insert(3, "0");
            }
        }
        void xuat(){
            cout << id << " " << name << " " << Class << " " << birth << " " << setprecision(2) << fixed << GPA <<endl;
}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

