#include <iostream>
#include <string>
using namespace std;

string Remove_P(string s)
{
    string res = "";
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')') // ASCII value for the outer parenthesis
            j--;

        if (j != 0)
            res += s[i];

        if (s[i] == '(') // ASCII value for the inner parenthesis
            j++;
    }

    return res;
}

int main()
{
    string s = "(()())(())";
    // string s = "))()(()"; // Not work for this type of the input
    string ans = Remove_P(s);

    cout << "After removing all the outermost parenthesis the string is:" << endl;
    // Print all the parenthesis in the answer string
    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k];
    }
    return 0;
}