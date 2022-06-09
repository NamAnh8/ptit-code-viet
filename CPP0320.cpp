#include <iostream>
#include <math.h>
#include <string>
#include <set>
#include <cctype>
using namespace std;
void solve(string s)
{
    set<char> se;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((!isdigit(s[i])) || (s[0] == '0'))
        {
            count++;
        }
        se.insert(s[i]);
    }
    if (count > 0)
    {
        cout << "INVALID";
    }
    else
    {
        if (se.size() == 10)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
        cout << endl;
    }
}