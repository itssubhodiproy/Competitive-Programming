#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void sortstring(string &s) // Sorting the string //
{
    ll j = -1;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] < '1')
        {
            j++;
            swap(s[i], s[j]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<ll> st;
        ll n;
        string s;
        cin >> n;
        cin >> s;
        string s2 = s;
        for (ll i = 0; i < n; i++) // Pushing Sring occurences into the set //
        {
            if (s[i] == '1')
            {
                st.insert(i + 1);
            }
        }
        sortstring(s);
        if (s2 == s) // Check if both strings are same or not //
        {
            cout << 0 << "\n";
            continue;
        }

        for (ll i = 0; i < n; i++) // after sorting Pushing the sring occurences into the set//
        {
            if (s[i] == '1')
            {
                if (st.count(i + 1) == 1)
                {
                    st.erase(i + 1);
                    continue;
                }
                st.insert(i + 1);
            }
        }
        cout << 1 << "\n";
        cout << st.size() << " ";
        for (auto it : st)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}