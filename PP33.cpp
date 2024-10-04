// Increasing Decreasing String
#include <bits/stdc++.h>
using namespace std;

string IncreasingDecreasing(string s)
{
    string res = "";
    int a[26] = {0};

    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 'a']++;
        k++;
    }

    while (k)
    {
        // For Increasing
        for (int i = 0; i < 26; i++)
        {
            if (a[i] > 0)
            {
                res += i + 'a';
                k--;
                a[i]--;
            }
        }

        // Decreasing
        for (int j = 25; j >= 0; j--)
        {
            if (a[j] > 0)
            {
                res += j + 'a';
                k--;
                a[j]--;
            }
        }
    }
    return res;
}
int main()
{
    string s = "aaaabbbbcccc";
    string res = IncreasingDecreasing(s);

    for (int k = 0; k < res.size(); k++)
        cout << res[k];
    cout << endl;
    return 0;
}