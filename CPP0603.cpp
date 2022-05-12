#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
string chuan(string name){
	stringstream ss(name);
	string res ="";
	string temp;
	while(ss >> temp){
		res += toupper(temp[0]);
		for(int i = 1; i < temp.length(); i++){
			res += tolower(temp[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}
class SinhVien{
	private:
	    string name, lop, birth, id;
	    double gpa;
	public:
		friend ostream& operator << (ostream& out, SinhVien);
		friend istream& operator >> (istream& in, SinhVien &);
};
ostream& operator << (ostream& out, SinhVien a){
	out << a.id <<" "<< a.name <<" "<< a.lop <<" "<< a.birth <<" "<< setprecision(2) << fixed << a.gpa;
	return out;
}
istream& operator >> (istream& in, SinhVien &a){
	a.id = "B20DCCN001";
	getline(cin, a.name);
	cin >> a.lop >> a.birth >> a.gpa;
	a.name = chuan(a.name);
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
