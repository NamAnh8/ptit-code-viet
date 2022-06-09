#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        set<int> se;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9' && (s[i - 1] > '9' || s[i - 1] < '0'))
            {
                sum = s[i] - '0';
                int j = i + 1;
                while (s[j] >= '0' && s[j] <= '9')
                {
                    sum = sum * 10 + s[j] - '0';
                    j++;
                }
                se.insert(sum);
                sum = 0;
            }
        }
        cout << *se.rbegin() << endl;
    }
}
