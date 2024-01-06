#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution
{
public:
    void wavePrint(vector<vector<int>> matrix)
    {

        int row = matrix.size();
        int colm = matrix[0].size();
        vector<int> ans;
        for (int Column = 0; Column < colm; Column++)
        {
            if ((Column & 1) == 0)
            {
                for (int i = 0; i < row; i++)
                {
                    ans.push_back(matrix[i][Column]);
                }
            }
            else
            {
                for (int i = row - 1; i >= 0; i--)
                {
                    ans.push_back(matrix[i][Column]);
                }
            }
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
    }
};

int main()
{
    Solution s1;
    vector<vector<int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    s1.wavePrint(v);

    return 0;
}