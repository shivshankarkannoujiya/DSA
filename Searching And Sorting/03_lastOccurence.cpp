#include <bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[], int n, int target)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {

            // store

            ans = mid;

            // go to right
            s = mid + 1;
        }
        else if (target > arr[mid])
        {

            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        // update mid
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{

    int arr[] = {10, 30, 30, 30, 30, 30, 40, 50};
    int n = 8;

    int target;
    cout << "Enter Target : ";
    cin >> target;

    // calling function
    int ansIndex = lastOccurence(arr, n, target);
    if (ansIndex == -1)
    {
        cout << "Not Found !!!" << endl;
    }
    else
    {
        cout << "Element is found at index : " << ansIndex << endl;
    }
}