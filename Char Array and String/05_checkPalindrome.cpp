#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char ch[], int n)
{

    // n --> lenght of string
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            // not matched
            return false;
        }
    }

    // matched whole char
    return true;
}

int main()
{

    char ch[100];
    cout << "Enter the char : ";
    cin.getline(ch, 100);
    int len = strlen(ch);
 
    bool isPalindrome = checkPalindrome(ch, len);
    if (isPalindrome)
    {

        cout << " Valid Palindrome!!!" << endl;
    }
    else
    {
        cout << " Invalid Palindrome !!!";
    }
}