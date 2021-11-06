#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll x, y, a, b, k;
    cin >> x >> y >> a >> b >> k;
    if ((k * a + x) > (k * b + y))
    {
      cout << "DIESEL" << endl;
    }
    else if ((k * a + x) == (k * b + y))
    {
      cout << "SAME PRICE" << endl;
    }
    else
    {
      cout << "PETROL" << endl;
    }
  }
  return 0;
}