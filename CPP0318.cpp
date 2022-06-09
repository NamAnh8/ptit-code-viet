#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int solve1(string s)
{
    for (int i = 0; i < 4; i++)
    {
        if (s[i] >= s[i + 1])
            return 0;
    }
    return 1;
}
int solve2(string s)
{
    for (int i = 0; i <= 4; i++)
    {
        if (s[i] != s[i + 1])
            return 0;
    }
    return 1;
}
int solve3(string s)
{
    if (s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
    {
        return 1;
    }
    return 0;
}
int solve4(string s)
{
    for (int i = 0; i <= 4; i++)
    {
        if (s[i] != '6' && s[i] != '8')
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ss = s.substr(5, 6);
        ss.erase(3, 1);
        if (solve1(ss) || solve2(ss) || solve3(ss) || solve4(ss))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}