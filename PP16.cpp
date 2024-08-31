// Remove all the adjacent duplicates in a string using a stack data structure
#include <bits/stdc++.h>
using namespace std;

string RemovedAdjDuplicates(string s)
{
    stack<char> data;
    for (int i = 0; i < s.size(); i++)
    {
        if (data.empty())
            data.push(s[i]);

        else
        {
            if (data.top() == s[i])
                data.pop();

            else
                data.push(s[i]);
        }
    }

    string res = "";
    while (!data.empty())
    {
        res = res + data.top();
        data.pop();
    }

    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string s = "abbaca";
    cout << RemovedAdjDuplicates(s) << endl;
    return 0;
}