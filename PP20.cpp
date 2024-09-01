// haystack and needle problem
#include <bits/stdc++.h>
using namespace std;

int strStr(string s, string sub)
{
    if (sub.empty())
        return 0;

    else
    {
        int found = s.find(sub);
        if (found != string::npos)
        {
            return found;
        }
        return -1;
    }
}

int main()
{
    string s = "hello";
    string sub = "ll";
    cout << strStr(s, sub) << endl;
    return 0;
}