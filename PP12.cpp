// Armstrong numbers between two intervals
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0;
    int n = 0;
    int temp, r;
    int start = 1, end = 100;
    for (int i = start; i <= end; i++)
    {
        // count the number of digits of the number
        temp = i;
        while (temp != 0)
        {
            temp /= 10;
            ++n; // count the number of digits
        }

        // Now check the number is armstrong or not
        temp = i;
        while (temp != 0)
        {
            r = temp % 10;
            res = res + pow(r, n);
            // remove the last digit of the number
            temp /= 10;
        }

        // Compare the sum and the digit
        if (i == res)
        {
            cout << i << " ";
        }
        n = 0;
        res = 0;
    }
    return 0;
}
