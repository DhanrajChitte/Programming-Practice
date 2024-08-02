// count all the permutations of the string
#include <bits/stdc++.h>
using namespace std;

int fact(int f)
{
    for (int i = f - 1; i > 1; i--)
        f = f * i;
    return f;
}

int permutation(char *s)
{
    int count[26] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        count[s[i] - 'a']++;
    }

    // Calculate the factorial of the string length
    int res = fact(len);

    // Check if the character occurs more than the 1 time
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 1)
            res = res / fact(count[i]);
    }

    return res;
}

int main()
{
    char s[100];
    cin >> s;
    int res = permutation(s);
    cout << res << endl;
    return 0;
}