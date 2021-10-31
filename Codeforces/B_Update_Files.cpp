#include <bits/stdc++.h>
using namespace std;
#define  i long long int
#define  w (a,b) while (a > b)                    <<<<<<<<<<<<----------- O(n^2)---------->>>>>>>>> Getting TLE 
int main()
{
    i t;
    cin >> t;
    while (t--)
    {
        i n, k;
        cin >> n >> k;
        i count = 0;
        i ans = 1;
        while (n > ans)
        {
            ans += min(ans, k);
            count++;
            // i++;
        }
        cout << count << endl;
    }

    return 0;
}
