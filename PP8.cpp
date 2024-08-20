// count the number of consistent strings
// I/P:allowed="ab",words=["ad","bd","aaab","baa","badab"]
#include <bits/stdc++.h>
using namespace std;

int countString(string s, vector<string> &w)
{
    int count = w.size();
    bool a[26] = {false};
    for (char c : s)
    {
        a[c - 'a'] = true;
    }

    for (string str : w)
    {
        for (char c : str)
        {
            if (a[c - 'a'] == false)
            {
                count--;
                break;
            }
        }
    }
    return count;
}
int main()
{
    string s = "ab";
    vector<string> w = {"ad", "bd", "aaab", "baa", "badab"};
    cout << countString(s, w) << endl;
}