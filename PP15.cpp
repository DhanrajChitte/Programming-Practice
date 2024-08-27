// Check the number is the strong number
// strong number take any number if the sum of the each digit factorial is equal to the number then
// the number is the strong number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rem;
    int i;
    cin >> n;
    int fact;
    int temp = n;
    int sum = 0;
    while (n)
    {
        i = 1, fact = 1;
        rem = n % 10;
        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        n = n / 10;
    }
    if (sum == temp)
        cout << temp << " is the strong number" << endl;

    else
        cout << temp << " is not the strong number" << endl;

    return 0;
}