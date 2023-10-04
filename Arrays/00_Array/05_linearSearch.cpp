#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < target; i++)
    {

        if (arr[i] == target)
        {

            return true; // found
        }
    }
    return false; // not found
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int target;

    // taking target input
    cout << "Enter Target : ";
    cin >> target;
    cout << endl;

    bool ans = linearSearch(arr, n, target);

    if (ans == true)
    {

        cout << "Target found" << endl
             << endl;
    }
    else
    {

        cout << "Target not found" << endl

             << endl;
    }
}