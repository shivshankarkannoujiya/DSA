#include <bits/stdc++.h>
using namespace std;

int searchInNearlySortedArray(int arr[], int n, int target)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid + 1 <= n && arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > arr[mid])
        {

            // goto right
            start = mid + 2;
        }
        else
        {

            // goto left
            end = mid - 1;
        }

        // update mid
        mid = start + (end - start) / 2;
    }

    // not found
    return -1;
}

int main()
{

    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    // int arr[] = {20, 30};
    int n = 7;
    int target;
    cout << "Enter Target : ";
    cin >> target;

    // calling function
    int ansIndex = searchInNearlySortedArray(arr, n, target);
    if (ansIndex == -1)
    {
        cout << "Not Found !!!" << endl;
    }
    else
    {
        cout << "Element found at index : " << ansIndex << endl;
    }
}