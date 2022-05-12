#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	if(s1.find(s2) != ' '){
		s1.replace(s1.find(s2), s2.length(),"");
		cout << s1 << endl;
	}
}
