#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creating Array

    int arr[5];
    int n = 5;

    // taking input
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    cout << endl;

    // printing total sum

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {

        // totalSum = arr[i] + totalSum;
        totalSum += arr[i];
    }
    cout << "totalSum is : " << totalSum << endl;
    cout << endl;

    //
    return 0;
}