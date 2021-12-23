#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- )
    {
	    
        string s;
        cin >> s;
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                count1++;
            }
            if (s[i] == 'b' && s[i + 1] == 'a')
            {
                count2++;
            }
        }

        if (count1 != count2)
        {
            if (count1 > count2)
            {
				s[0]='b';
			}
            if (count2 > count1)
            {
				s[0]='a';	
        }
		cout<<s<<endl;
		}
        else
        {
            cout << s << endl;
        }
        
    }

    return 0;
}
