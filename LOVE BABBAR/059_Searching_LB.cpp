#include <bits/stdc++.h>
using namespace std;

// Pivot Element In Rotated & Sorted Array
int pivot_element(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (start == end)
        {
            return start;
        }

        if (mid + 1 <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[start] > arr[mid])
        {
            end = mid + 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{9, 10, 2, 4, 6, 8};
    int ans = pivot_element(arr);
    if (ans == -1)
    {
        cout << "kuch to gadbad hai" << endl;
    }
    else
    {
        cout << "Ans Att Index " << ans << endl;
        cout << "The Pivot Element is " << arr[ans] << endl;
    }

    return 0;
}