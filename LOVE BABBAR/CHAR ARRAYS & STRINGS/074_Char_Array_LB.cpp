#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Learning
{

public:
    void character()
    {
        // char ch[10];
        // cout << "Enter Your Name:" << endl;
        // cin >> arr;
        // cout << arr;

        // ch[0] = 'a';
        // ch[1] = 'b';
        // cin >> ch[2];

        // cout << ch;

        // char ch[10];

        // cin >> ch;

        // cout << ch;
    }
};

// 1. Length of String
void lengthOfString()
{
    char ch[100] = "Sahil Gunjal";
    int count = 0;
    int i = 0;
    // while (ch[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // cout << count;

    cout << "The length of String:" << strlen(ch) << endl;
}

// 2. Reverse of String
void reverseString()
{
    char ch[15] = "Sahil";
    int n = strlen(ch);
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
    cout << "The reverse:" << ch << endl;
}

// 3. Replace All Spaces
void replaceSpace(char sentence[])
{
    int n = strlen(sentence);
    for (int i = 0; i < n; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }

    cout << sentence;
}

// 4. Palindrome
bool palindrome(char ch[])
{
    int n = strlen(ch);
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (ch[i] != ch[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

// 5. Convert into Upper Case

void converUppercase(char ch[])
{
    int n = strlen(ch);

    for (int i = 0; i < n; i++)
    {
        ch[i] = ch[i] - 'a' + 'A';
    }
    cout << ch;
}

// 6. Convert into Lower Case

void converLowercase(char ch[])
{
    int n = strlen(ch);

    for (int i = 0; i < n; i++)
    {
        ch[i] = ch[i] - 'A' + 'a';
    }
    cout << ch;
}

int main()
{
    Learning l1;
    // l1.character();

    // 1. Length of String
    // lengthOfString();

    // 2. Reverse of String
    // reverseString();

    // 3. Replace All Spaces
    // char sentance[100];
    // cin.getline(sentance, 100);
    // replaceSpace(sentance);

    // 4. Palindrome
    // char ch[100];
    // cout << "Enter The String:" << endl;
    // cin.getline(ch, 50);
    // cout << "The Given String is Pali:" << palindrome(ch) << endl;

    // 5. Convert to upper Case
    // char ch[100];
    // cout << "Enter String:";
    // cin.getline(ch, 10);
    // converUppercase(ch);

    // 6. Convert to lower Case
    char ch[100];
    cout << "Enter String:";
    cin.getline(ch, 10);
    converLowercase(ch);

    return 0;
}