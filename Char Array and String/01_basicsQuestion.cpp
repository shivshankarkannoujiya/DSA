#include <bits/stdc++.h>
using namespace std;

int lenghtOfChar(char ch[], int size)
{

    int lenght = 0;
    for (int i = 0; i < size; i++)
    {

        if (ch[i] == '\0')
        {

            // stop
            break;
        }
        else
        {
            lenght++;
        }
    }

    return lenght;
}

// Using while loop
int findlenght(char ch[])
{

    int length = 0;
    int index = 0;
    while (ch[index] != '\0')
    {
        length++;
        index++;
    }
    return length;
}

int main()
{
    char ch[100];
    cout << "Enter the character : ";
    // cin >> ch;
    cin.getline(ch, 100);

    int length = lenghtOfChar(ch, 100);
    cout << "Lenght is : " << length << endl;

    cout << "Lenght using utility function is : " << strlen(ch) << endl;
}