#include <bits/stdc++.h>
using namespace std;

// 1.Color Sort(LeetCode)
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // STL
        // sort(nums.begin(),nums.end());

        // count Method
        //  int zeros,ones,twos;
        //  zeros=ones=twos=0;
        //  for(int i=0;i<nums.size();i++)
        //  {
        //      if(nums[i]==0)
        //      {
        //          zeros++;
        //      }
        //      else if(nums[i]==1)
        //      {
        //          ones++;
        //      }
        //      else{
        //          twos++;
        //      }
        //  }

        // int i=0;
        // while(zeros--)
        // {
        //     nums[i]=0;
        //     i++;
        // }
        // while(ones--)
        // {
        //     nums[i]=1;
        //     i++;
        // }
        // while(twos--)
        // {
        //     nums[i]=2;
        //     i++;
        // }

        // 3 Pointer Approach "in-palce"

        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

// 2.Move all -ve Numbers to the Left

void leftofArrray(int *nums, int n)
{
    // 2 Pointer approach(Dutch National Flag)
    int low = 0, high = n - 1;

    while (low <= high)
    {
        if (nums[low] < 0)
        {
            low++;
        }
        else if (nums[high] > 0)
        {
            high--;
        }
        else
        {
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
    }
}

// 3.Find Duplicate elemeny in the array

int Duplicate(vector<int> arr, int n)
{
    // Normal Method
    //  for (int i = 0; i < n; i++)
    //  {
    //      if (arr[i] == arr[i + 1])
    //      {
    //          return arr[i];
    //      }
    //  }

    // Negative Marking
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index] < 0)
        {
            ans = index;
        }
        arr[index] *= -1;
    }
    return ans;
}

// 4.Missing Element With Duplicates(1-Based Index)

int MissingElement(vector<int> arr, int n)
{

    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }

    for (auto val : arr)
    {
        cout << val << " ";
    }

    // all positive Numbers are Missing

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            cout << "\nMissing Number is : " << i + 1 << endl;
        }
    }
}

// 5.First repeating Element

int repeating(vector<int> arr, int n)
{
    // Time Complexity: O(n^2) it should be O(n)
    // for (int i = 0; i < n; i++)
    // {
    //     bool isRepeated = false;

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             isRepeated = true;
    //             return i + 1;
    //         }
    //     }
    // }
    // return -1;

    // optimized Solution

    // unordered_map<int, int> hash;
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]]++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (hash[arr[i]] > 1)
    //     {
    //         return i + 1;
    //     }
    // }
    // return -1;

    // without using unordered_map

    int hash[6];
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

// 6.Comman Element in 3 Sorted Array

vector<int> commonelement(vector<int> A, vector<int> B, vector<int> C, int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> st;
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto val : st)
    {
        ans.push_back(val);
    }

    // for (auto val : ans)
    // {
    //     cout << val << " ";
    // }
    return ans;
}

// 7.Wave Print a Matrix

void wavePrint(vector<vector<int>> v)
{
    int row = v.size();
    int colm = v[0].size();

    for (int startcol = 0; startcol < colm; startcol++)
    {
        // even no. of Column top-->bottom
        if ((startcol & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << v[i][startcol] << " ";
            }
        }
        else
        {
            // odd print bottom--> top
            for (int i = row - 1; i >= 0; i--)
            {
                cout << v[i][startcol] << " ";
            }
        }
    }
}

// 8.Spiral Print

void SpiralPrint(vector<vector<int>> v)
{
    vector<int> result;
    int row = v.size();
    int colm = v[0].size();
    int total_elements = row * colm;

    int starting_row = 0;
    int ending_colm = colm - 1;
    int ending_row = row - 1;
    int starting_colm = 0;

    int count = 0;
    while (count < total_elements)
    {
        // print starting Row
        for (int i = starting_row; i <= ending_colm && count < total_elements; i++)
        {
            cout << v[starting_colm][i];
            count++;
        }
        starting_row++;

        // print ending colm

        for (int i = starting_row; i <= ending_row && count < total_elements; i++)
        {
            cout << v[i][ending_colm];
            count++;
        }

        ending_colm--;

        // print ending row
        for (int i = ending_colm; i >= starting_colm && count < total_elements; i--)
        {
            cout << v[ending_row][i];
            count++;
        }
        ending_row--;

        // print starting colm
        for (int i = ending_row; i >= starting_row && count < total_elements; i--)
        {
            cout << v[i][starting_colm];
            count++;
        }
        starting_colm++;
    }
}

int main()
{
    vector<int> arr{1, 3, 5, 3, 7, 5};
    // 2.Negative Number on Left
    //  leftofArrray(arr, 7);

    // for (auto val : arr)
    // {
    //     cout << val << " ";
    // }

    // 3.Find Duplicate Number
    // int result = Duplicate(arr, 8);
    // cout << result;

    // 4.Missing Element In Arrya With Duplicate
    // MissingElement(arr, 5);

    // 5.Repeating Element
    // cout << repeating(arr, 6);

    // 6.Comman Element in 3 Array

    // vector<int> A{1, 5, 10, 20, 40, 80};
    // vector<int> B{6, 7, 20, 80, 100};
    // vector<int> C{3, 4, 15, 20, 30, 70, 80, 120};

    // vector<int> ans;
    // ans = commonelement(A, B, C, 6, 5, 8);

    // for (auto val : ans)
    // {
    //     cout << val << " ";
    // }

    // 7.wave Print
    // vector<vector<int>> v{
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16},
    //     {17, 18, 19, 20}};

    // wavePrint(v);

    // 8.Spiral Print

    // vector<vector<int>> v{
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    // vector<int> ans;
    // SpiralPrint(v);

    return 0;
}