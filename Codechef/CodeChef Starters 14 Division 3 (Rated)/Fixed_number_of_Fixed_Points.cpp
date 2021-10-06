#include <bits/stdc++.h>

using namespace std;

//Display elements of the array
void display(vector<int> a, int n,int k){
    if (a[k-1]==k)
    {
    for (int i = 0; i < n; i++)
    {
        if (a[i]==k)
        {
            continue;
        }
        if (a[i]==i+1)
        {
            return;
        }  
    }
    for(int i=0;i<n;i++) 
    cout << a[i] << " ";
    cout << endl;
    return ;
    }
    // cout << a[i] << " ";
    // cout << endl;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
       //Obtaining length of array
    int n;
    cin >> n;

    //Declaring a vector of integers
    vector<int> a(n);
    
    //Taking input of array of integers
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
int k;cin>>k;
    do{
        //Display the current permutation//
        display(a, n, k);
    }while(next_permutation(a.begin(), a.end())); //Generate next permutation till it is not lexicographically largest
    }
    
    
    return 0;
}
