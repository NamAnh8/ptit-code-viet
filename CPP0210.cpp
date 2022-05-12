#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int solve(int a[100000],unsigned int n){
	int max=a[1]-a[0];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]-a[i]>max){
					max=a[j]-a[i];	
				}
			}
		}
	return max;
}
int main(){
	unsigned int n,t;
	int a[100000];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	    if(solve(a,n)){
		    cout<<solve(a,n)<<endl;
	    }else{
		    cout<<"-1"<<endl;
	    }
	}
}
