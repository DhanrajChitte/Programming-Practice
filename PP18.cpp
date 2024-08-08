// Remove duplicates in place I/P:[0,1,2,2,3,0,4,2],val=2 then O/P=5
#include <bits/stdc++.h>
using namespace std;

int RemoveEle(vector<int> &nums, int val)
{
    int i = 0;
    for (auto data : nums)
    {
        if (data != val)
        {
            nums[i] = data;
            i++;
        }
    }
    return i;
}
int main()
{
    vector<int> nums{0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    cout << RemoveEle(nums, val) << endl;
}