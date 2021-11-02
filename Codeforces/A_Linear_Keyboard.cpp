#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string al;
        cin >> al;
        string s;
        cin >> s;
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < al.length(); j++)
            {
                if (s[i] == al[j])
                {
                    st.push(j + 1);
                }
            }
        }
        int ans = 0;
        while (st.size()>1)
        { 
            int curr = 0;
            int current1 = st.top();
            st.pop();
            int current2 = st.top();
            curr = current1 - current2;
            if (curr < 0)
            {
                curr *= (-1);
            }
            ans += curr;
        }
        cout << ans << endl;
    }

    return 0;
}