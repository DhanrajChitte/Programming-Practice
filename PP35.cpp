// Replace all queation(?)marks
#include <bits/stdc++.h>
using namespace std;

string avoid(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            for (char j = 'a'; j <= 'z'; j++)
            {
                // left neighbour
                if (i - 1 >= 0 && s[i - 1] == j)
                    continue;

                // right neighbour
                if (i + 1 < n && s[i + 1] == j)
                    continue;

                s[i] = j;
                break;
            }
        }
    }
    return s;
}

int main()
{
    string s = "??yw?ipkj?";
    string ans = avoid(s);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
    cout << endl;
    return 0;
}