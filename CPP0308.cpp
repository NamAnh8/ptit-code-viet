#include<iostream>
#include <cstring>
using namespace std;
main()
{
    unsigned int t;
    cin>>t;
    while(t--){
    	scanf("\n");
        string str;
        getline(cin,str);
        int in,len=0,i;
        for(in=0;str[in]!='\0';in++)
        {
            len++;
        }
        int arr[256]={0};
        for(i=0;i<len;i++)
        {
            if(str[i]!=' ')
            arr[str[i]]++;
        }
        char ch=' ';
        for(i=0;i<len;i++)
        {
            if(arr[str[i]]==1){
                ch=str[i];
                cout<<ch;
            }
        }
        cout << endl;
    }
}
