/*#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n; long long a[n];
		vector<long long> b;
		vector<long long> c;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 0){
				b.push_back(a[i]);
			}else{
				c.push_back(a[i]);
			}
			sort(b.begin(), b.end());
		}
		for(int x : c){
			cout << x <<" ";
		}
		for(int x : b){
			cout << x <<" ";
		}
		cout << endl;
	}
}*/
#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    int t; 
	cin>>t; 
	while(t--){ 
	    int n,dem=0; 
		cin>>n; 
		long long a[100000]; 
		for(int i=1;i<=n;i++){ 
		    cin>>a[i]; 
			if(a[i]!=0) 
			    cout<<a[i]<<" "; 
			else dem++; 
		} 
		for(int i=1;i<=dem;i++) 
		    cout<<"0"<<" "; 
			cout<<endl; 
	} 
}
