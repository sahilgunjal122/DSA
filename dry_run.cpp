#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // search in left
            end = mid - 1;
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
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int target = 10;
    int size = 7;
    int indexofterget = binarysearch(arr, size, target);

    if (indexofterget == -1)
    {
        cout << "Element not Found ";
    }
    else
    {
        cout << "Element Found at " << indexofterget;
    }
    return 0;
}