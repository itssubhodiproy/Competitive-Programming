#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> v;
        set<ll> s;
        queue<ll> q;
        bool check = true;
        bool check1 = true;
        sort(arr, arr + n);

        for (ll i = 0; i < n-1; i++)
        {

            if( (arr[i] == arr[i + 1]) && (check==true) ) 
            {
                v.push_back(arr[i]);
                check = false;
            }
            
            else if ( (arr[i] == arr[i + 1]) && (check == false) )
            {
                check1=false;
                break;
            }
            
            else if (arr[i] != arr[i + 1])
            {
                check = true;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        
        if (check1==false)
        {
            cout << "-1" << endl;
            continue;
        }
        else if (s.size() == n)
        {
            for (ll i = n - 1; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            continue;
        }

        else 
        {
            sort(v.begin(), v.end());
            vector<ll>::iterator pt;
            for (pt = v.begin(); pt != v.end(); pt++)
            {
                q.push(*pt);
            }
            set<ll>::reverse_iterator ptr;
            for (ptr = s.rbegin(); ptr != s.rend(); ptr++)
            {
                q.push(*ptr);
            }
            for (int i = 0; i < n; i++)
            {
                arr[i]=q.front();q.pop();
            }
            ll maxi=INT_MIN;
            for (int i = 0; i < n; i++)
            {
                maxi=max(maxi,arr[i]);
            }
            int count=0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i]==maxi)
                {
                    count++;
                }
                
            }
            if (count>1)
            {
                cout<<"-1"<<endl;continue;
            }
            else{
                for (int i = 0; i < n; i++)
                {
                    cout<<arr[i]<<" "; 
                }
                cout<<endl;   
            }
            
            
            
           
            
        }
    }
    return 0;
}