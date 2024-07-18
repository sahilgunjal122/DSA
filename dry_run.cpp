#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();

        vector<int> hash{n + 1, 0};

        for (int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }

        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (hash[i] > max)
            {
                max = hash[i];
            }
        }
        return hash[max];
    }
};

int main()
{
    Solution s1;
    vector<int> nums{3, 2, 3};
    int ans;
    ans = s1.majorityElement(nums);
    cout << "THis is the ans:" << ans;
    return 0;
}