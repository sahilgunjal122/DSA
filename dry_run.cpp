#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> hash(n, 0);

        for (auto num : nums)
        {
            hash[num]++;
        }

        for (auto it : hash)
            if (hash[it] == 1)
            {
                return it;
            }

        return -1;
    }
};

int main()
{
    Solution s1;
    int ans;
    vector<int> nums{1, 1, 2, 3, 3, 4, 4, 8, 8};
    ans = s1.singleNonDuplicate(nums);
    cout << ans << endl;

    return 0;
}