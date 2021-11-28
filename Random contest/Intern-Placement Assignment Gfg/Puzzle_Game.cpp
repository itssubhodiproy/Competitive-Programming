#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
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
        // stack<int> s1;
        // stack<int> s2;
        // ll prev1 = 0;
        // ll prev2 = 0;
        // bool check = true;
        // for (ll i = 0; i < n; i++)
        // {
        //     if (i % 2 == 0)
        //     {
        //         if (prev1 == 0)
        //         {
        //             prev1 = arr[i];
        //         }
        //         else if (arr[i] > prev1)
        //         {
        //             prev1 = arr[i];
        //         }
        //         else
        //         {
        //             cout << "LOSE"
        //                  << "\n";
        //             check = false;
        //         }
        //     }
        //     else
        //     {
        //         if (prev2 == 0)
        //         {
        //             prev2 = arr[i];
        //         }
        //         else if (arr[i] < prev2)
        //         {
        //             prev2 = arr[i];
        //         }
        //         else
        //         {
        //             cout << "LOSE"
        //                  << "\n";
        //             check = false;
        //         }
        //     }
        // }

        bool flag_pr = true, flag_ne = true;
        for (int i = 0; i < n - 2; i++)
        {
            if (i % 2)
            {
                if (arr[i] < arr[i + 2])
                {
                    flag_ne = false;
                    break;
                }
            }
            else
            {
                if (arr[i] > arr[i + 2])
                {
                    flag_pr = false;
                    break;
                }
            }
        }
        if (flag_pr == true && flag_ne == true)
            cout << "WIN" << endl;
        else
            cout << "LOSE" << endl;

        // while (!s1.empty())
        // {
        //     if(s1.size()==1){
        //         break;
        //     }
        //     ll top= s1.top();
        //     s1.pop();
        //     if(top>s1.top()){
        //         cout<<"LOSE"<<"\n";check =false;
        //         break;
        //     }
        // }
        // while (!s2.empty())
        // {
        //     if(s2.size()==1){
        //         break;
        //     }
        //     ll top= s2.top();
        //     s2.pop();
        //     if(top<s2.top()){
        //         cout<<"LOSE"<<"\n";
        //         break;check =false;
        //     }
        // }
        // if (check)
        // {
        //     cout << "WIN"
        //          << "\n";
        // }
    }

    return 0;
}