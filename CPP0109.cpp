#include<iostream>
using namespace std;
//123084567
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4'){
                i=i+2;
            }else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}


