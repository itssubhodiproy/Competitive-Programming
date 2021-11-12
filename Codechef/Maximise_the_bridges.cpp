#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n == m)
        {
            if (m == (n * (n - 1) / 2))
            {
                for (ll i = 1; i <= m; i++)
                {
                    if (i == m)
                    {
                        cout << i << " " << '1' << endl;
                        continue;
                    }

                    cout << i << " " << i + 1 << endl;
                }
            }
            else
            {
                for (ll i = 1; i <= m; i++)
                {
                    if (i == m)
                    {
                        cout << '1' << " " << '3' << endl;
                        continue;
                    }
                    cout << i << " " << i + 1 << endl;
                }
            }
        }
        else if (m == n - 1)
        {
            for (ll i = 1; i <= m; i++)
            {
                cout << i << " " << i + 1 << endl;
            }
        }
        else if (m > n)
        {

            // int j=1;
            // int ans=2;
            // while (m--)
            // {
            //     if(ans==n+1){
            //         j++;
            //         ans=j+1;
            //     }
            //     cout<<j<<" "<<ans<<endl;
            //     ans++;
            // }
            int first = 1;
            int diff = 1;
            int temp;
            int prevfirst = first;
            while (m--)
            {
                if (first + diff > n)
                {
                    diff++;
                    first = 1;
                }

                temp = first + diff;
                prevfirst = min(first, prevfirst);
                                                            if (prevfirst > 1 && diff > 1)
                                                            {

                                                                prevfirst--;
                                                                cout << prevfirst << " " << temp << endl;
                                                                continue;
                                                            }
                cout << first << " " << temp << endl;
                first++;
                prevfirst = first;
            }
        }
    }
    return 0;
}
