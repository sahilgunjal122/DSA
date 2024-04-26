#include <iostream>
#include <vector>
using namespace std;

// 1.Binary Search in Nearly Sorted Array

int binarysearch(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 < arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (arr[mid] < target)
        {
            // search right
            s = mid + 2;
        }
        else
        {
            // search left
            e = mid - 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 50;

    int ans = binarysearch(arr, target);

    cout << "The element is at " << ans << endl;

    return 0;
}