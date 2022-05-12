#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n = s.length();
	for(int i = 0; i < n; i++){
		s[i] = tolower(s[i]);
	}
	for(int i = 0; i < n; i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o'|| s[i] == 'i' || s[i] == 'y'){
			continue;
		}else{
			cout <<"."<< s[i];
		}
	}
	
	
}
