#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9' && (s[i - 1] < '0' || s[i - 1] > '9'))
            {
                sum = s[i] - '0';
                int j = i + 1;
                while (s[j] <= '9' && s[j] >= '0')
                {
                    sum = sum * 10 + s[j] - '0';
                    j++;
                }
                v.push_back(sum);
                sum = 0;
            }
        }
        int tong = 0;
        for (int i = 0; i < v.size(); i++)
        {
            tong += v[i];
        }
        cout << tong << endl;
    }
}