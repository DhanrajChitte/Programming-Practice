// is SubSeq or not
#include <bits/stdc++.h>
using namespace std;

bool SubSeq(string s, string t)
{
    int m = s.length();
    int n = t.length();

    // Two Pointer Approach
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (s[i] == t[j])
            i++;

        j++;
    }

    return i == m ? 1 : 0;
}
int main()
{
    string s = "aec";
    string t = "abcde";
    cout << SubSeq(s, t) << endl;
    return 0;
}