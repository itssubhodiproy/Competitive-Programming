#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;
        // My vector is storing all my strings
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        set<string> st;
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {

            if (st.count(v[i]) == 0)
            {
                m.insert(make_pair(v[i], 1));
                st.insert(v[i]);
            }
            else
            {
                m[v[i]]++;
            }
        }
        //taking out the maximum occurances
        int maxi = INT_MIN;
        for (auto it : m)
        {
            maxi = max(maxi, it.second);
        }
        string now="";
        //taking out the string with same length of maxi
        for (auto it : m)
        {
            if (it.second == maxi)
            {
                now = it.first;
                break;
            }
        }

        string s;
        //converting string to uppercase
        for (int x = 0; x < now.size(); x++)
        {
            if ((int)now[x] > 90)
            {
                s.push_back((char)((int)now[x] - 32));
            }
            else
            {
                s.push_back(now[x]);
            }
        }

        cout << s << " " << maxi << "\n";
    }

    return 0;
}

//
