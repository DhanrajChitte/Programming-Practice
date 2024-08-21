/* Valid Parenthesis or Brackets Problem
I/P: ()((()()))  O/P: ((()))*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int c = 0;
    int t = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 40)
            c++;
        else
            c--;
        t = max(t, c);
    }

    for (int j = 0; j < t; j++)
    {
        cout << char(40);
    }

    for (int k = 0; k < t; k++)
    {
        cout << char(41);
    }
    return 0;
}