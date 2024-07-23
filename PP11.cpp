// Remove duplicates from the sorted array
#include <bits/stdc++.h>
using namespace std;
int duplicates(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    int prev = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[prev] != nums[i])
        {
            prev++;
            nums[prev] = nums[i];
        }
    }
    return prev + 1;
}
int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = duplicates(nums);

    for (int j = 0; j < n; j++)
    {
        cout << nums[j] << " ";
    }
    return 0;
}