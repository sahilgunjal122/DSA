#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Learning
{
public:
    int findingTarget(int arr[], int size, int target)
    {
        int start = 0;
        int end = size - 1;
        int mid = (start + end) / 2;
        // int mid =start+(e-start)/2; To Avoid the Interger Overflow

        while (start <= end)
        {
            int element = arr[mid];
            if (target == element)
            {
                return mid;
            }
            else if (target < element)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = (start + end) / 2;
            // mid =start+(end-start)/2;
        }
        return -1;
    }
};

// 1.First occurnace of an Element
int firstoccurance(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            // store and search left
            ans = mid;
            // left search
            end = mid - 1;
        }
        else if (target > v[mid])
        {
            // Right Search
            start = mid + 1;
        }
        else if (target < v[mid])
        {
            // left Search
            end = mid - 1;
        }
    }
    return ans;
}

// 2.Last occurance of an Element
int lastOccurance(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            // store and search left
            ans = mid;
            // right search
            start = mid + 1;
        }
        else if (target > v[mid])
        {
            // Right Search
            start = mid + 1;
        }
        else if (target < v[mid])
        {
            // left Search
            end = mid - 1;
        }
    }
    return ans;
}

// Missing Element

// Peak element in a Mountain Array

int peak_element(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    Learning l1;
    // int arr[] = {2, 4, 6, 8, 10, 12, 16};
    // int size = 7;
    // int target = 6;

    // int ans;
    // ans = l1.findingTarget(arr, size, target);

    // if (ans == -1)
    // {
    //     cout << "Element Not Found" << endl;
    // }
    // else
    // {
    //     cout << "Element Found at " << ans << " Index" << endl;
    // }

    // Using STL

    // vector<int> v{1, 2, 5, 4, 5, 6};

    // if (binary_search(v.begin(), v.end(), 5))
    // {
    //     cout << "Found";
    // }
    // else
    // {
    //     cout << "Not Found";
    // }

    // 1.first occurance of Element

    vector<int> nums{1, 3, 5, 7, 2, 6, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int indexfirstOcc = firstoccurance(nums, target);
    cout << "First :" << indexfirstOcc << endl;

    // 2.Last Occurance of Element
    int indexlastOcc = lastOccurance(nums, target);
    cout << "last :" << indexlastOcc << endl;

    // Using In-Build Function

    auto ans1 = lower_bound(nums.begin(), nums.end(), 4);
    cout << "First is:" << ans1 - nums.begin() << endl;

    auto ans2 = upper_bound(nums.begin(), nums.end(), 4);
    cout << "Last is:" << ans2 - nums.begin() << endl;

    // 3.Total Occurance

    int TotalOccurance = indexlastOcc - indexfirstOcc + 1;
    cout << "Total Occ:" << TotalOccurance << endl;

    // 4.Missing Element in Array Using BS

    // 5.Peak Element in the Array

    vector<int> peak{0, 10, 5, 2};
    int peak_element1 = peak_element(peak);
    cout << "Peak Element at Index:" << peak_element1 << endl;

    return 0;
}