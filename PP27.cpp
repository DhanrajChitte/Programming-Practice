// Total number of common factors between two numbers
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, count = 0;
    cin >> a >> b;
    ll n = __gcd(a, b);

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;

            else
                count = count + 2;
        }
    }

    cout << count << endl;
}