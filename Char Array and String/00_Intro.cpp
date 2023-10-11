#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Creating char array
    cout << "Enter the Character : ";
    char ch[5];

    // Taking input Array
    // cin >> ch;

    // Printing Char Array
    cout << ch;

    // Accessing
    // cout << ch[0] << endl;
    // cout << ch[1] << endl;
    // cout << ch[2] << endl;
    // cout << ch[3] << endl;
    // cout << ch[4] << endl;

    // Printing using loop
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Char at" << i << " is  : " << ch[i] << endl;
    // }

    // ASCII value of NULL char [\0] : 0
    // Verifying

    // char temp = ch[4];
    // typecasting it into int
    // int value = (int)temp;
    // cout << "Printing integer value : " << value;  // Ans : 0 verified

    char name[100];
    // cin >> name;
    // cout << name;

    // Using cin.getline()
    cin.getline(name, 90);
    cout << name;
}