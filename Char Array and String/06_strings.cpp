#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 1. Creation
    string name;

    // 2. Taking input
    cout << "Enter name : ";
    // cin >> name;
    getline(cin, name);

    // 3. Printing
    // cout << "Printing name : " << name << endl;

    // 4. Accessing using indexes
    // cout << "Printing first char : " << name[0] << endl;

    // Printing whole character while we are not getting NULL character ['\0']
    int index = 0;
    while (name[index] != '\0')
    {
        cout << "Index : " << index << "  "
             << "Character : " << name[index] << endl;

        index++;
    }

    // Printing  the NULL char
    cout << "Printing index 8 value : " << name[8] << endl;
    int value = (int)name[8];
    cout << "Printing index 8 ASCII value : " << value << endl;
}