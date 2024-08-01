// Decompress
#include <bits/stdc++.h>
using namespace std;

vector<int> decompress(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res;
    // use the insert function of vector and arguments are following
    // insert(position,size,val)
    for (int i = 0; i < n; i += 2)
    {
        res.insert(res.end(), nums[i], nums[i + 1]);
    }

    return res;
}
int main()
{
    vector<int> nums{1, 2, 2, 4};
    vector<int> ans = decompress(nums);
    for (int j = 0; j < ans.size(); j++)
        cout << ans[j] << " ";
    cout << endl;
    return 0;
}