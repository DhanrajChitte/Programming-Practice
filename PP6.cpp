// Jewels and Stones Problem
// e.g. jewels="aA", stones="aAAbbbb" output:3
#include <bits/stdc++.h>
using namespace std;

int JinS(string j, string s)
{
    int count = 0;
    // create a map of strings jewels and stones
    map<char, bool> mp;
    // Iterate through the first string and check it is present in the second string or not
    for (int i = 0; i < j.size(); i++)
    {
        mp[j[i]] = true;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] == true)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string j = "xy";
    string s = "aAAbbbb";
    cout << JinS(j, s) << endl;
    return 0;
}