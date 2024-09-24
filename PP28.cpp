#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int count = 0;

    int len1 = str1.length();
    int len2 = str2.length();

    // for (int i = 0; i < len1 - len2 + 1; i++)
    for (int i = 0; i + len2 - 1 < len1; i++)
    {
        if (str1.substr(i, len2) == str2)
            count++;
    }
    cout << count << endl;
    return 0;
}