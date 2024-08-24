// Remove duplicates from the sorted array(Duplicates appears at most twice)
#include <bits/stdc++.h>
using namespace std;

int duplicates(vector<int> &nums)
{
    int i = 0;
    for (auto data : nums)
    {
        if (i == 0 || i == 1 || data != nums[i - 2])
        {
            nums[i] = data;
            i++;
        }
    }
    return i;
}
int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    int n = duplicates(nums);
    cout << n << endl;
}