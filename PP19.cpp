// Check the number is the strong prime number or not
// if Pn>(Pn+1+Pn-1)/2
#include <bits/stdc++.h>
using namespace std;
// Check the number is prime or not
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    else if (n <= 3)
        return true;

    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
// Check the number is strong prime or not
static bool isStrongPrime(int n)
{
    if (!isPrime(n) || n == 2)
        return false;

    int prev = n - 1;
    int nxt = n + 1;

    while (!isPrime(nxt))
        nxt++;

    while (!isPrime(prev))
        prev--;

    int m = (nxt + prev) / 2;
    if (n > m)
        return true;

    else
        return false;
}
int main()
{
    int n = 10;
    if (isStrongPrime(n))
        cout << n << " is the strong prime number" << endl;

    else
        cout << n << " is not the strong prime number" << endl;
}