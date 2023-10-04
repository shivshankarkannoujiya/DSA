#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[][4], int row, int col, int target)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    // Target nhi mila
    return false;
}

main()
{

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    int row = 3;
    int col = 4;

    int target;
    cout << "Enter target : ";
    cin >> target;
    cout << endl;

    // calling function

    bool Ans = linearSearch(arr, row, col, target);
    if (Ans == true)
    {
        cout << "Found !!!" << endl
             << endl;
    }
    else
    {
        cout << "Not Found !!!" << endl
             << endl;
    }
}