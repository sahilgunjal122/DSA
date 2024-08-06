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

    void String()
    {
        string str;
        cout << "Enter Name:";
        // Get input including spaces.
        getline(cin, str);
        cout << str;

        cout << "Length:" << str.length() << endl;
        cout << "is Empty:" << str.empty() << endl;

        str.push_back('A');
        cout << str << endl;
        str.pop_back();
        cout << str;

        cout << "Specified length String:" << endl;
        cout << "Substring:" << str.substr(0, 6) << endl;

        cout << "Compare String:" << endl;
        // Case Sensitive changes acco. to Lower & Upper Case
        string a = "Piyush";
        string b = "Piyush";

        if (a.compare(b) == 0)
            cout << "exctly Same" << endl;
        else
            cout << "Not Same" << endl;

        cout << endl;
        cout << "Find function" << endl;

        string sentence = "hello everyone";
        string target = "Sahil";
        // Returns the Index where it has spoted
        // cout << "The Word at Index:" << sentence.find(target) << endl;

        if (sentence.find(target) == string::npos)
        {
            cout << "Not found" << endl;
        }

        cout << endl;
        cout << "Replace function" << endl;

        string sen = "My Name is babbar";
        string word = "Sahil";

        sen.replace(11, 16, word);
        cout << sen << endl;

        cout << endl;
        cout << "erase function" << endl;

        sen.erase(11, 16);
        cout << sen << endl;
    }
};

// Questions on Character
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

// Questions on String

int compareFunction(string a, string b)
{
    if (a.length() != b.length())
        return false;
    else
    {

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
    }
    return true;
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
    // char ch[100];
    // cout << "Enter String:";
    // cin.getline(ch, 10);
    // converLowercase(ch);

    // String Questions
    l1.String();

    // 1. Compare function

    // string a = "Sahil";
    // string b = "Gunjal";

    // cout << "Ans:" << compareFunction(a, b) << endl;

    return 0;
}