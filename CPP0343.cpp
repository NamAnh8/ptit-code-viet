#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int even = 0; int odd = 0;
		int n = 0;
		char kitu = ' ';
		while(kitu != '\n'){
			int x;
			cin >> x;
			n++;
			if(x % 2 == 0){
				even++;
			}else{
				odd++;
			}
			kitu = getchar();
		}
		if((n % 2 == 0 && even > odd) || (n % 2 == 1 && odd > even)){
			cout << "YES";
		}else{
			cout << "NO";
		}
		cout << endl;
	}
}
