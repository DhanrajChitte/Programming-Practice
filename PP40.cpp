// How many numbers are smaller than current

#include <bits/stdc++.h>
using namespace std;

vector<int> SmallerNo(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if ((nums[i] > nums[j]) && (i != j))
            {
                count++;
            }
        }
        res.push_back(count);
    }
    return res;
}
int main()
{
    vector<int> nums{8, 1, 2, 2, 3};
    vector<int> ans = SmallerNo(nums);
    for (int k = 0; k < ans.size(); k++)
        cout << ans[k] << " ";
    cout << endl;
    return 0;
}