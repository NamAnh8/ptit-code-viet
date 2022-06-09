#include <iostream>
#include <math.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n;
        ll r = 0;
        cin >> n;
        for (char x : s)
        {
            r = r * 10 + (x - '0');
            r %= n;
        }
        cout << r;
        cout << endl;
    }
}