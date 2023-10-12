#include <bits/stdc++.h>
using namespace std;

void reverseString(char ch[], int len)
{

    int i = 0;
    int j = len - 1;

    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{

    char ch[100];
    cout << "Enter Sequence of Char : ";
    cin.getline(ch, 100);
    int len = strlen(ch);
    cout << "Printing Before Reverse :  " << ch << endl;

    cout << "Printing After Reverse  :  ";
    reverseString(ch, len);
    cout << ch << " ";
}