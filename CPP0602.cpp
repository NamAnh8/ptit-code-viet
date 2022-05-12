#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
class SinhVien{
	private:
	    string name, lop, birth, id;
	    double gpa;
	public:
		SinhVien(){
			name = lop = birth = id ="";
			gpa = 0;
		}
		friend ostream& operator << (ostream& out, SinhVien);
		friend istream& operator >> (istream& in, SinhVien&);
};
ostream& operator << (ostream& out, SinhVien a){
	out << a.id <<" "<< a.name <<" "<< a.lop <<" "<< a.birth <<" "<< setprecision(2) << fixed << a.gpa <<endl;
	return out; 
}
istream& operator >> (istream& in, SinhVien &a){
	a.id = "B20DCCN001";
	getline(cin, a.name);
	in >> a.lop >> a.birth >> a.gpa;
	if(a.birth[1] == '/'){
		a.birth = "0" + a.birth;
	} 
	if(a.birth[4] == '/'){
		a.birth.insert(3, "0");
	}
	return in;
}
int main(){
	SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
