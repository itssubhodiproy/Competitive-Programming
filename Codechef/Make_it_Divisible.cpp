#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll sum = 0;

        ll modulo_2 = 0;
        ll modulo_1 = 0;
        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 3 == 0)
        {
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] % 3 != 0)
                {
                    // count++;
                    if (arr[i] % 3 == 2)
                    {
                        modulo_2++;
                    }
                    else if (arr[i] % 3 == 1)
                    {
                        modulo_1++;
                    }
                }
            }

            if (modulo_1 > 1 || modulo_2 > 1)
            {
                if ((modulo_2 + modulo_1) % 2 == 0)
                {
                    ans = ((modulo_1 + modulo_2) / 2);
                }
                else
                {
                    ans = ((modulo_1 + modulo_2) / 2) + 1;
                }
            }
            else if (modulo_1 == 1 && modulo_2 == 1)
            {
                ans = 1;
            }
            else if (modulo_1 < 1 && modulo_2 < 1)
            {
                ans = 0;
            }
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}