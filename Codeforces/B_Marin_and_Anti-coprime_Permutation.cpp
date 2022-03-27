/*
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define float double
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
const long long MAX_SIZE = 1000001;

// isPrime[] : isPrime[i] is true if number is prime
// prime[] : stores all prime number less than N
// SPF[] that store smallest prime factor of number
// [for Exp : smallest prime factor of '8' and '16'
// is '2' so we put SPF[8] = 2 , SPF[16] = 2 ]
vector<long long> isprime(MAX_SIZE, true);
vector<long long> prime;
vector<long long> SPF(MAX_SIZE);
// put function
int manipulated_seive(int N)
{
    int count = 0;
    // 0 and 1 are not prime
    isprime[0] = isprime[1] = false;

    // Fill rest of the entries
    for (int i = 2; i < N; i++)
    {
        // If isPrime[i] == True then i is
        // prime number
        if (isprime[i])
        {
            // put i into prime[] vector
            count++;

            // A prime number is its own smallest
            // prime factor
            SPF[i] = i;
        }

        // Remove all multiples of  i*prime[j] which are
        // not prime by making isPrime[i*prime[j]] = false
        // and put smallest prime factor of i*Prime[j] as prime[j]
        // [ for exp :let  i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ]
        // so smallest prime factor of '10' is '2' that is prime[j] ]
        // this loop run only one time for number which are not prime
        for (int j = 0;
             j < (int)prime.size() &&
             i * prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i * prime[j]] = false;

            // put smallest prime factor of i*prime[j]
            SPF[i * prime[j]] = prime[j];
        }
    }
    return count;
}

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;

        vector<int> v(1001);
        v[0] = 1;
        int mod = 998244353;
        for (int i = 1; i <= 1000; i++)
        {
            v[i] = (v[i - 1] * i) % mod;
        }

        if (n & 1)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            cout << (v[n / 2] * v[n / 2]) % mod << "\n";
        }
    }
    return 0;
}
