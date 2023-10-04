#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;

    // taking target input
    cout << "Enter Target : ";
    int target;
    cin >> target;
    cout << endl;

    bool flag = 0; // initially not found
    // flag = 1 --> found
    // flag = 0 --> Not found
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == target)
        {

            flag = 1; // found
            break;
        }
    }

    // check

    if (flag == 1)
    {
        cout << "Target Found !" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }
    cout << endl;
}