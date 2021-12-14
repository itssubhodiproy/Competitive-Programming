#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll size;
        cin >> size;
        ll n = size - 2;
        // string arr[n];
        string result = "";

        string final = "";
        string word;
        for (ll i = 0; i < n; i++)
        {
            cin >> word;
            final += word;
        }
        // cout<<final<<"\n";

        for (ll i = 0; i < final.length() - 1; i++)
        {
            // result+=arr[i];
            if (i % 2 == 0) // checking for even numbers
            {
                result.push_back(final[i]);
            }
            else if (i % 2 != 0)
            { // checking for odd numbers
                if (final[i] != final[i + 1])
                { // check if last!=fast
                    result.push_back(final[i]);
                    // result.push_back(final[i+1]);
                }
            }

            // if(i==n-2){
            //     result.push_back(arr[n-1][0]);
            // }
        }
        result.push_back(final[final.length() - 1]);

        char lastchar = result[result.length() - 1];

        if (result.length() < size)
        {
            while (result.length()!=size)
            {
               result.push_back(lastchar);
            }
            
        }
        // cout<<lastchar<<"\n";


        cout << result << "\n";
    }

    return 0;
} // } Driver Code Ends