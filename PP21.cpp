#include <bits/stdc++.h>
using namespace std;

bool repeatedString(string s)
{
    return (s + s).substr(1, 2 * s.size() - 2).find(s) != -1; // abababab then substr=bababa then s in substr
}
int main()
{
    string s = "ab";
    if (repeatedString(s))
        cout << "true" << endl;

    else
        cout << "false" << endl;
}