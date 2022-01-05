#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        int N;
        cin >> N;
        int powe = 1;
        int f = 0;
        for (int j = 0; j < N; j++)
        {
            int ip;
            cin >> ip;
            v.push_back(ip);
        }

        for (int j = 0; j < 32; j++)
        {
            int cont = 0;
            for (int i = 0; i < N; i++)
            {
                if (v[i] % 2 == 1)
                    cont++;
                v[i] /= 2;
            }
            if (cont > 1)
                f = f + powe;
            powe *= 2;
        }
        cout << f << endl;
    }
}
