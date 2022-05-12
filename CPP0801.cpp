#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream new_file;
	new_file.open("Ptit.txt", ios::in);
	if(new_file.is_open()){
		string s;
		getline(new_file, s);
		cout << s;
	}
	new_file.close(); 
}
