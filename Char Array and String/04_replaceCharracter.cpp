#include <bits/stdc++.h>
using namespace std;

void replaceCharacter(char ch[], int n)
{

    int index = 0;
    while (ch[index] != '\0')
    {

        // fetch current char
        char currChar = ch[index];
        if (currChar == '@')
        {

            // insert space
            ch[index] = ' ';
        }
        index++;
    }
}

int main()
{

    char ch[100];
    cout << "Enter seq of char : ";
    cin.getline(ch, 100);
    cout << "Printing before replace : " << ch << endl;

    // calling function
    replaceCharacter(ch, 100);
    cout << "Printing After replace : " << ch << endl;
}