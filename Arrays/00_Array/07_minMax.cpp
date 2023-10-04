#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{

    int minAns = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < minAns)
        {

            minAns = arr[i];
        }
    }

    return minAns;
}

// max

int getMax(int arr[], int n)
{

    int maxAns = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAns)
        {

            maxAns = arr[i];
        }
    }

    return maxAns;
}

int main()
{

    // cout << endl;
    // cout << "Value is :  " << INT_MIN << endl; //(-2^31)
    // cout << "Value is :  " << INT_MAX << endl; //(2^31-1)
    // cout << endl;

    int arr[] = {2, 3, 5, 6, 7, 8, 9, 80, 11, 1};
    int size = 10;

    int minNumer = getMin(arr, size);
    cout << "Min Numer is : " << minNumer << endl;
    cout << endl;

    int maxNum = getMax(arr, size);
    cout << "Max Num is : " << maxNum << endl;
    cout << endl;

    return 0;
}