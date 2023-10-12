#include <bits/stdc++.h>
using namespace std;

void toUpperCase(char ch[], int len)
{

    int index = 0;
    while (ch[index] != '\0')
    {

        // fetch currentChar
        char currChar = ch[index];
        // check if small case char then convert
        if (currChar >= 'a' && currChar <= 'z')
        {
            ch[index] = currChar - 'a' + 'A';
        }
        index++;
    }
}

int main()
{

    char ch[100];
    int len = strlen(ch);
    cout << "Enter the char : ";
    cin.getline(ch, 100);

    cout << "Printing Before converting : " << ch << endl;
    toUpperCase(ch, len);
    cout << "Printing After converting : " << ch << endl;
}