#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m, r, c;
        cin >> n >> m >> r >> c;

        char arr[n][m];

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                
                cin>>arr[i][j];
            }
        }
        // first case3 where there is no such black cell
        ll black = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (arr[i][j] == 'B')
                {
                    black++;
                }
                // cout<<arr[i][j]<<" ";
            }
            // cout<<'\n';
        }
        // cout<<black<<"\n";
        if (black == 0)
        {
            cout << "-1"
                 << "\n";
            continue;
        }

        // if our point matches to the result (0th based index)
        if (arr[r - 1][c - 1] == 'B')
        {
            cout << "0"
                 << "\n";
            continue;
        }

        //if there is one black is which is present corresponding to the col and row
        // we can return 1
        bool check = false;

        for (ll j = 0; j < n; j++) 
        {
            if (arr[j][c - 1] == 'B')           //0th based index
            {
                check = true;
                break;
            }
        }

        for (ll j = 0; j < m; j++)
        {
            if (arr[r - 1][j] == 'B')                 
            { 
                check = true;
                break;
            }
        }

        if (check)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << '\n';
        }
    }
    return 0;
}
