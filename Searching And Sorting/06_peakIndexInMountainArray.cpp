#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{

    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        // check condition first --> A
        if (arr[mid] < arr[mid + 1])
        {

            // true wala condtion
            // got ot right
            start = mid + 1;
        }
        else
        {

            // we at B or Peak
            // if at B goto left
            end = mid;
        }

        // update mid
        mid = start + (end - start) / 2;
    }

    // Single element left start == end == mid
    // return anyOne
    return mid;
}

int main()
{

    vector<int> arr = {10, 20, 50, 30, 40};

    // calling function
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "PeakIndex is : " << peakIndex << endl;
    return 0;
}