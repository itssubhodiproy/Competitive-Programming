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
        if(n<=1){
            cout<<"-1"<<"\n";continue;
        }
        vector<int> v1;
        set<int> s;

        ll ele;
        for (ll i = 0; i < n * 2; i++)
        {
            cin >> ele;
            v1.push_back(ele);
            s.insert(ele);
        }

        sort(v1.begin(), v1.end());
        ll median;
        if (s.size() % 2 == 0)
        {
            // median = (v1.size() / 2) - 1;
            median = (s.size() / 2);
        }
        else if (s.size() % 2 != 0)
        {
            median = (s.size() / 2) + 1;
        }
        vector<int> v2;
        ll med = 3;
        set<int, greater<int>>::iterator itr;
        ll count = 1;
        for (itr = s.begin(); itr != s.end(); itr++)
        {
            if (count == s.size())
            {
                v2.push_back(*itr);
                break;
            }
            else if (count == median)
            {
                while (med--)
                {
                    v2.push_back(*itr);
                }
            }
            else
            {
                v2.push_back(*itr);
                v2.push_back(*itr);
            }
            count++;
        }
        sort(v2.begin(), v2.end());
        if ((v1 == v2))
        {
            set<int, greater<int>>::iterator itr;
            for (itr = s.begin(); itr != s.end(); itr++)
            {
                cout << *itr << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "-1"
                 << "\n";
        }
        // for (auto i = v1.begin(); i != v1.end(); i++)
        // {
        //     cout<<*i<<" ";
        // }
        // cout<<"\n";

        // for (auto i = v2.begin(); i != v2.end(); i++)
        // {
        //     cout<<*i<<" ";
        // }
        // cout<<"\n";


//     int n; cin>>n;
//     vector<int> b, v1; int x;
//     map<int,int> m1,ch;
//     for(int i = 0; i < 2*n; i++)
//     {
//         cin>>x;
//         b.push_back(x);
//         if(m1[x]==0) v1.push_back(x);
//         m1[x]++;
//     }
//     sort(v1.begin(),v1.end());
//     int k=0; ch[v1[0]]++;
//     for (int i = 1; i < v1.size(); i++)
//     {
//            int mm = ceil((i+1)/2.0);
//            ch[v1[mm-1]]++;
//     }
//      k = v1.size()-1; ch[v1[k]]++;

//     for (int i = k-1; i >= 0; i--)
//     {
//         int mm;
//          mm = i+ceil((k-i+1)/2.0);
       
//         ch[v1[mm-1]]++;
//     }
    
//     for (auto i = m1.begin(),j=ch.begin(); i != m1.end(); i++,j++)
//     {
//         if(*i!=*j)
//         {
//             cout << "-1\n";
//             break;
//         }
//         /* code */
//     }

//     for(auto i=v1.begin();i!=v1.end();i++)
//     {
//         cout << *i <<" ";
//     }
//  cout << endl;
    }
    return 0;
}