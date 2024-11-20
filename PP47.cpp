#include <bits/stdc++.h>
using namespace std;

int fun(int n, int a[])
{
    sort(a, a + n);
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        res = res + (a[i] - a[i - 1]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << fun(n, a) << endl;
    return 0;
}