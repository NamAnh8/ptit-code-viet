#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    unsigned int t;
    cin>>t;
    while(t--){
        unsigned long long int n,a[100000];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]<<endl;
    }
}
