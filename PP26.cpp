// Job Interview Question
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, x, count = 0;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Sort the array in descending order
    sort(a, a + n, greater<int>()); // descending order sorting

    x = a[k - 1];

    // Check if the remaning elements is equal to the last element of k
    for (int j = k; j < n; j++)
    {
        if (a[j] == x)
            count++;

        else
            break;
    }
    cout << k + count << endl;
    return 0;
}
