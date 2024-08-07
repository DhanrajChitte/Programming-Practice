// Wedding Game/Minimun number of sets with numbers less than Y
// I/P:- s="1234",Y=30

#include <bits/stdc++.h>
using namespace std;

int weddingGame(string s, int y, int l)
{
    int count = 0;
    int flag = 0;
    int num = 0;
    for (int i = 0; i < l; i++)
    {
        num = num * 10 + (s[i] - '0');
        if (num <= y)
            flag = 1;
        else
        {
            if (flag)
                count = count + 1;
            num = s[i] - '0';
            flag = 0;
            if (num <= y)
                flag = 1;
            else
                num = 0;
        }
    }
    if (flag)
        count = count + 1;
    return count;
}
int main()
{
    string s = "1234";
    int l = s.size();
    int y = 30;
    cout << weddingGame(s, y, l) << endl;
    return 0;
}