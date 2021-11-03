#include <bits/stdc++.h>
using namespace std;
#define dt long long int


int main()
{//                                 >>>>>> Getting TLE <<<<<<<<
    dt t;
    cin >> t;
    while (t--)
    {
        dt x, n;
        cin >> x >> n;
        dt i = 1;
        dt ans;
        while (n--)
        {
            if (x % 2 == 0)
            {
                ans = i * (-1);
                i++;
            }
            else
            {
                ans = i;
                i++;
            }
            x += ans;
        }
        cout << x << endl;
    }

    return 0;
}