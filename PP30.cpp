// Kids with greatest number of candies
#include <bits/stdc++.h>
using namespace std;

vector<bool> KidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> res;
    for (auto i : candies)
    {
        if ((i + extraCandies) >= *max_element(candies.begin(), candies.end()))
            res.push_back(true);

        else
            res.push_back(false);
    }
    return res;
}
int main()
{
    vector<int> candies{2, 3, 5, 1, 3};
    int extraCandies = 3;
    vector<bool> ans = KidsWithCandies(candies, extraCandies);
    for (auto i = ans.begin(); i != ans.end(); i++)
        cout << *i << " ";
    return 0;
}