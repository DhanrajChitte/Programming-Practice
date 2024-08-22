// Roots of the quadratic equation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d, r1, r2, r, i;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << r1 << " and " << r2 << endl;
    }

    else if (d == 0)
    {
        r1 = r2 = -b / 2 * a;
        cout << r1 << endl;
    }

    else
    {
        r = -b / (2 * a);
        i = sqrt(-d) / (2 * a);
        cout << r + i << " and " << -r + i;
    }
    return 0;
}