#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class NhanVien{
	public:
	    string name, gender, birth, add, date, code, id;
	    void nhap(){
	    	id = "00001";
	    	getline(cin, name);
	    	cin >> gender >> birth;
	    	cin.ignore();
	    	getline(cin, add);
	    	cin >> code >> date;
		}
		void xuat(){
			cout << id <<" "<< name <<" "<< gender <<" "<< birth <<" "<< add <<" "<< code <<" "<< date;
		}
};
int main(){
	NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
