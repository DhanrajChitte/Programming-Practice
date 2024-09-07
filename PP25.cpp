#include <bits/stdc++.h>
using namespace std;

string Rev(string s)
{
    if (s.size() == 0)
        return " ";
    stringstream ss(s); // Let's do it
    string word;        // empty
    string res = "";

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        res = res + word;
        res = res + " ";
    }

    res.erase(res.size() - 1); // Remove the last word whitespace
    return res;
}

int main()
{
    string s = "Let's do it";
    string rev = Rev(s);

    for (int i = 0; i < rev.size(); i++)
        cout << rev[i];
    cout << endl;
}