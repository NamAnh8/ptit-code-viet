#include <iostream>
#include <string>
#include <math.h>
#include <cctype>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		char s;
		cin >> s;
		char s_take;
		if(s >= 65 && s <= 90){
			s_take = tolower(s);
		}else if(s >= 97 && s <= 122){
			s_take = toupper(s);
		}else{
			return 0;
		}
		cout << s_take << endl;
	}
}
