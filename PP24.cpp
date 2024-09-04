// Reverse the order of words in a given sentence
#include <bits/stdc++.h>
using namespace std;

string Rev(string s)
{
    string res;
    string temp;
    stringstream ss(s);

    for (ss >> res; ss >> temp;)
    {
        res = move(temp.append(string(" ").append(res)));
    }
    return res;
}

int main()
{
    string s = "the sky is blue";
    string rev = Rev(s);

    for (int i = 0; i < rev.size(); i++)
        cout << rev[i];
    cout << endl;
    return 0;
}