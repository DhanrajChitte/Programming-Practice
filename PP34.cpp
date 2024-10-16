// Generate the string with characters that have odd counts
// I/P: n=4 O/P : pppz
#include <bits/stdc++.h>
using namespace std;

string oddcounts(int n)
{
    string res = "";
    if (n % 2 == 0)
    {
        res = res + 'z';
        n -= 1;
    }
    for (int i = 0; i < n; i++)
    {
        res = res + 'p';
    }

    return res;
}
int main()
{
    int n = 6;
    string ans = oddcounts(n);
    for (int j = 0; j < ans.size(); j++)
        cout << ans[j];
    cout << endl;
    return 0;
}
