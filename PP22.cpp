#include <bits/stdc++.h>
using namespace std;

int Repeating(string s, string sub)
{
    int k = 0;
    string temp = sub;

    while (s.find(temp) != string::npos)
    {
        temp = temp + sub;
        k++;
    }

    return k;
}
int main()
{
    string s = "ababc";
    string sub = "ab";

    cout << Repeating(s, sub) << endl;
}