#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
    //     ll k, n, m;
    //     cin >> k >> n >> m;
    //     ll arr1[n];
    //     ll arr2[m];
    //     bool check = true;
    //     //Read//
    //     for (ll i = 0; i < n; i++)
    //     {
    //         cin >> arr1[i];
    //     }
    //     for (ll i = 0; i < m; i++)
    //     {
    //         cin >> arr2[i];
    //     }
    //     // // counting 0's
    //     // ll p = k;
    //     // //first arr check
    //     // for (ll i = 0; i < n; i++)
    //     // {
    //     //     if (arr1[i] == 0)
    //     //         p++;
    //     // }
    //     // //second arr check
    //     // for (ll i = 0; i < m; i++)
    //     // {
    //     //     if (arr2[i] == 0)
    //     //         p++;
    //     // }
    //     //checking for "-1"

    //     // for (ll i = 0; i < n; i++)
    //     // {
    //     //     if (arr1[i] > p)
    //     //     {
    //     //         check = false;
    //     //         break;
    //     //     }
    //     // }
    //     // for (ll i = 0; i < m; i++)
    //     // {
    //     //     if (arr2[i] > p)
    //     //     {
    //     //         check = false;
    //     //         break;
    //     //     }
    //     // }
    //     // if (!check)
    //     // {
    //     //     cout << -1 << '\n';
    //     //     continue;
    //     // }

    //     ll i = 0;
    //     vector<ll> v;
    //     while (i != min(n, m))
    //     {
    //         // both numbers are zero
    //         if ((arr1[i] == 0 && arr2[i] == 0))
    //         {
    //             k++;
    //             k++;
    //             v.push_back(arr1[i]);
    //             v.push_back(arr2[i]);
    //             // cout<<arr1[i]<<" "<< arr2[i]<<" ";
    //             i++;
    //             continue;
    //         }

    //         // one number is zero
    //         else if (min(arr1[i], arr2[i]) == 0)
    //         {

    //             //another number is greater than k.
    //             if (max(arr1[i], arr2[i]) > k)
    //             {

    //                 if (arr1[i] > k && arr2[i] == 0)
    //                 {

    //                     k++;
    //                     if (k < arr1[i])
    //                     {
    //                         check = false;
    //                         break;
    //                     }
    //                     else
    //                     {
    //                         v.push_back(arr1[i]);
    //                         v.push_back(arr2[i]);
    //                         // cout << arr2[i] << " " << arr1[i] << " ";
    //                         i++;
    //                     }
    //                 }
    //                 else if (arr2[i] > k && arr1[i] == 0)
    //                 {
    //                     k++;
    //                     if (k < arr2[i])
    //                     {
    //                         check = false;
    //                         break;
    //                     }

    //                     else
    //                     {

    //                         v.push_back(arr1[i]);
    //                         v.push_back(arr2[i]);
    //                         // cout << arr1[i] << " " << arr2[i] << " ";i++;
    //                     }
    //                 }
    //                 continue;
    //             }
    //             //another number is lesser than k.
    //             else if (max(arr1[i], arr2[i]) < k)
    //             {

    //                 if (arr1[i] < k && arr2[i] == 0)
    //                 {
    //                     k++;
    //                         v.push_back(arr1[i]);
    //                         v.push_back(arr2[i]);
    //                     // cout << arr1[i] << " " << arr2[i] << " ";
    //                     i++;
    //                 }
    //                 else if (arr2[i] < k && arr1[i] == 0)
    //                 {
    //                     k++;
    //                     v.push_back(arr1[i]);
    //                         v.push_back(arr2[i]);

    //                     // cout << arr2[i] << " " << arr1[i] << " ";
    //                     i++;
    //                 }

    //                 continue;
    //             }
    //         }

    //         // both are bigger than k
    //         else if (arr2[i] > k && arr1[i] > k)
    //         {
    //             check = false;
    //             break;
    //         }

    //         // if both numbers are less than k
    //         else if ((arr1[i] < k && arr2[i] < k))
    //         {
    //             v.push_back(arr1[i]);
    //                         v.push_back(arr2[i]);
    //             // cout << arr1[i] << " " << arr2[i] << " ";
    //             i++;
    //         }
    //     }
    //     if (!check)
    //     {
    //         cout << -1 << "\n";
    //         continue;
    //     }
    // if(m!=n){
    //     if (m > n)
    //     {
    //         while (i != m)
    //         {
    //             v.push_back(arr2[i]);
    //             // cout << arr2[i] << " ";
    //             i++;
    //         }
    //         cout << "\n";
    //     }
    //     else if (n > m)
    //     {
    //         while (i != n)
    //         {
    //             v.push_back(arr1[i]);
    //             // cout << arr1[i] << " ";
    //             i++;
    //         }
    //         cout << "\n";
    //     }
    // }
    //     for(auto it: v){
    //         cout<<it<<" ";
    //     }
    //     cout<<"\n";


	int k,m,p;
	cin >> k >> m >> p;
	vector<ll>mon,pol;
	for(int i = 0; i < m; i++){
	    int inp;
	    cin >> inp;
	    mon.push_back(inp);
	}
	for(int i = 0; i < p; i++){
	    int inp;
	    cin >> inp;
	    pol.push_back(inp);
	}
	int i = 0, j = 0;
	vector<ll> ans;
	bool flag = true;
	while(i<m && j<p){
	    if(mon[i]<pol[j]){
	        if(mon[i]==0){
	            k++;
	            ans.push_back(mon[i]);
	            i++;
	        } else{
	            if(mon[i]<=k){
	                ans.push_back(mon[i]);
	                i++;
	            } else{
	                flag = false;
	                break;
	            }
	        }
	    } else if(mon[i]>pol[j]){
	        if(pol[j]==0){
	            k++;
	            ans.push_back(pol[j]);
	            j++;
	        } else{
	            if(pol[j]<=k){
	                ans.push_back(pol[j]);
	                j++;
	            } else{
	                flag = false;
	                break;
	            }
	        }
	    } else{
	        if(mon[i]==0){
	            k+=2;
	            ans.push_back(mon[i]);
	            ans.push_back(pol[j]);
	            i++;
	            j++;
	        } else{
	            if(mon[i]<=k){
	                ans.push_back(mon[i]);
	                ans.push_back(pol[j]);
	                i++;
	                j++;
	            } else{
	                flag = false;
	                break;
	            }
	        }
	    }
	}
	if(flag){
	    while(i<m){
	        if(mon[i]==0){
	            k++;
	            ans.push_back(mon[i]);
	            i++;
	        } else{
	            if(mon[i]<=k){
	                ans.push_back(mon[i]);
	                i++;
	            } else{
	                flag = false;
	                break;
	            }
	        }
	    }
	    while(j<p){
	        if(pol[j]==0){
	            k++;
	            ans.push_back(pol[j]);
	            j++;
	        } else{
	            if(pol[j]<=k){
	                ans.push_back(pol[j]);
	                j++;
	            } else{
	                flag = false;
	                break;
	            }
	        }
	    }
	    if(flag){
	        for(auto it:ans)
	            cout << it << " ";
	        cout << endl;
	    } else{
	        cout << -1 << endl;
	    }
	} else{
	    cout << -1 << endl;
	}
}

    return 0;
}
