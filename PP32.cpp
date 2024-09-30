// String Halves are Alike or Not?
#include <bits/stdc++.h>
using namespace std;

bool HalvesAreAlike(string s)
{
    int n = s.size();
    // Divide the string s into the two equal halves
    string a = s.substr(0, n / 2);
    string b = s.substr(n / 2, n / 2);

    // the string contain either capital or small letters then we convert all the into small characters
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int count = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            count++;

        if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
            count--;
    }
    return (count == 0);
}

int main()
{
    string s = "aeio";
    cout << HalvesAreAlike(s) << endl;
    return 0;
}