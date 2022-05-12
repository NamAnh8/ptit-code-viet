#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int fb[100];
void sang(){
	fb[0] = 0;
	fb[1] = 1;
	for(int i = 2; i < 93; i++){
		fb[i] = fb[i - 1] + fb[i - 2];
	}
}

int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0;i < n; i++){
			for(int j = 0; j < 93; j++){
				if(a[i] == 1){
					cout << a[i] <<" ";
					break;
				}
				else if(a[i] == fb[j]){
					cout << a[i] <<" ";
				}
				
			}
		}
		cout << endl;
	}
}

