#include<iostream>
#include<math.h>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
void findgcd(unsigned long long n, unsigned long long x, unsigned long long y)
{
    unsigned long long g = gcd(x,y);
    for (int i = 0; i < g; i++)
        cout << n;
}
 

int main()
{
    unsigned long long x=1e18;    
    unsigned long long y=1e18;    
    unsigned long long n=1e18;    
    unsigned int t;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        findgcd(n, x, y);
        cout<<endl;
    }
    return 0;
}
