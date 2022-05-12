#include <iostream>
#include <math.h>
#include <string>
using namespace std;
string solve(string n){
	int l = n.length();
	int index = -1;
	//12435
	for(int i = l - 2; i >= 0; i--){
		if( n[i] > n[i+1]){
			swap(n[i], n[i + 1]);
			index ++;
			break;
		}
	}
	if( n[0] != 0){
		if(index == -1){
	     	return "-1";
	    }else if(index != -1){
		    return n;
	    }
	}else{
		return "-1";
	}
	
	return "-1";
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		cout << solve(n);
		cout << endl;
	}
}

