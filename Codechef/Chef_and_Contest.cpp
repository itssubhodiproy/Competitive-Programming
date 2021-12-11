#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll he, she, point1, point2;
        cin >> he >> she >> point1 >> point2;

        ll chef, chefina;
        
        chef = he + (point1 * 10);
        chefina = she + (point2 * 10);
        
        if (chef < chefina)
        {
            cout << "Chef"
                 << "\n";
        }
        else if (chef > chefina)
        {
            cout << "Chefina"
                 << "\n";
        }
        else if (chef == chefina)
        {
            cout << "Draw"
                 << "\n";
        }

        // if((point1*10)<(point2*10)){
        //     cout<<"Chef"<<"\n";
        // }
        // else if((point1*10)>(point2*10)){
        //     cout<<"Chefina"<<"\n";
        // }
        // else if((point1*10)==(point2*10)){
        //     cout<<"Draw"<<"\n";
        // }
    }

    return 0;
}