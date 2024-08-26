#include <bits/stdc++.h>
using namespace std;
int main()
{

    int sum = 0;
    for (int j = 1; j < 100; j++)
    {
        for (int i = 1; i < j; i++)
        {
            if (j % i == 0)
                sum += i;
        }

        if (sum == j)
            cout << j << endl;

        sum = 0; // update the sum
    }
    return 0;
}