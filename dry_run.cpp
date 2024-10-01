#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;

        while (i <= j)
        {
            if (s[i] == s[j])
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s1;
    string s = " ";
    bool ans = s1.isPalindrome(s);
    if (ans == true)
        cout << "Is A Palindrome";
    else
        cout << "Is not";

    return 0;
}