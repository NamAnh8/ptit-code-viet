#include <iostream>
#include <math.h>
using namespace std;
int solve(int n, int k)
{
    int ans = -1, count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            count++;
            if (count == k)
            {
                ans = i;
                break;
            }
            n /= i;
        }
    }
    if (n != 1)
    {
        count++;
        if (count == k)
        {
            ans = n;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}