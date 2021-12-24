#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // //Read//
        // ll n;
        // cin >> n;
        // string s;
        // cin >> s;

        // //Initialization//
        // char arr[n][n];
        // // memset(arr, '*', sizeof arr);
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         arr[i][j] = '*';
        //     }
        // }
        // ll count2 = 0;
        // //check for No//
        // for (ll i = 0; i < n; i++)
        // {
        //     if (s[i] == '2')
        //     {
        //         count2++;
        //     }
        // }
        // if (count2 <= 2)
        // {
        //     cout << "NO" << '\n';
        //     continue;
        // }
        // else
        // {
        //     for (ll i = 0; i < n; i++)
        //     {
        //         bool check = true;
        //         if (s[i] == '1')
        //         {
        //             for (int j = 0; j < n; j++)
        //             {
        //                 if (i == j)
        //                 {
        //                     arr[i][j] = 'X';
        //                 }
        //                 else if (s[j] == '1')
        //                 {
        //                     arr[i][j] = '=';
        //                 }
        //                 else
        //                 {
        //                     arr[i][j] = '+';
        //                 }
        //             }
        //         }
        //         else if (s[i] == '2')
        //         {
        //             for (int j = 0; i < n; j++)
        //             {
        //                 if (i == j)
        //                 {
        //                     arr[i][j] = 'X';
        //                 }

        //                 else if (arr[i][j] == '*' && arr[j][i] != '*')
        //                 {
        //                     if (arr[j][i] == '+')
        //                     {
        //                         arr[i][j] = '-';
        //                     }
        //                     else if (arr[j][i] == '-')
        //                     {
        //                         arr[i][j] = '+';
        //                     }
        //                 }
        //                 else if (arr[i][j] == '*' && arr[j][i] == '*')
        //                 {
        //                     if (check)
        //                     {
        //                         arr[i][j] = '+';
        //                         check = false;
        //                     }
        //                     else
        //                     {
        //                         arr[i][j] = '-';
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }

        // cout << "YES"
        //      << "\n";
        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < n; j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int count1 = 0, count2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    count1++;
                if (s[i] == '2')
                    count2++;
            }
            if (count2 <= 2 && count2 > 0 && count1 != 0)
                cout << "NO" << endl;
            else if (count2 == 2 && count1 == 0)
                cout << "NO" << endl;
            else
            {
                int dp[n][n];
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                        dp[i][j] = -1;
                }
                for (int i = 0; i < n; i++)
                {
                    bool flag = true;
                    for (int j = 0; j < n; j++)
                    {
                        if (s[i] == '1')
                        {
                            if (i == j)
                                dp[i][j] = 3;
                            else if (s[j] == '1')
                                dp[i][j] = 4;
                            else
                                dp[i][j] = 1;
                        }
                        else
                        {
                            if (i == j)
                                dp[i][j] = 3;
                            else if (s[j] == '1')
                                dp[i][j] = 2;
                            else if (dp[i][j] == -1 && dp[j][i] != -1)
                            {
                                if (dp[j][i] == 1)
                                    dp[i][j] = 2;
                                else
                                    dp[i][j] = 1;
                            }
                            else if (dp[i][j] == -1 && dp[j][i] == -1)
                            {
                                if (flag)
                                {
                                    dp[i][j] = 1;
                                    flag = !flag;
                                }
                                else
                                    dp[i][j] = 2;
                            }
                        }
                    }
                }
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (dp[i][j] == 1)
                            cout << "+";
                        else if (dp[i][j] == 2)
                            cout << "-";
                        else if (dp[i][j] == 3)
                            cout << "X";
                        else if (dp[i][j] == 4)
                            cout << "=";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}