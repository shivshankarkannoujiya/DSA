#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int target)
{

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        // Found
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {

            // right
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        //    update mid
        mid = (start + end) / 2;
    }

    // nothing found
    return -1;
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = arr.size();

    int target;
    cout << "Enter Target : ";
    cin >> target;

    // calling function
    int ansIndex = binarySearch(arr, size, target);
    if (ansIndex == -1)
    {
        cout << "Element Not Found !!!" << endl;
    }
    else
    {
        cout << "Element FOund at Index : " << ansIndex << endl;
    }
}