// Program for the find nth number whose prime factors are {1,2,3,5}
#include <bits/stdc++.h>
using namespace std;

int primeFactor(int n)
{
    int arr[n];
    for (int i = 1, j = 0; i <= 1000; i++)
    {
        int num = i;

        while (num % 2 == 0)
            num = num / 2;

        while (num % 3 == 0)
            num = num / 3;

        while (num % 5 == 0)
            num = num / 5;

        if (num == 1)
            arr[j++] = i;

        if (arr[n - 1] == i)
            break;
    }
    return arr[n - 1];
}
int main()
{
    int n;
    cin >> n;
    cout << primeFactor(n) << endl;
}