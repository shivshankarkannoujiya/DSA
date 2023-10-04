#include <bits/stdc++.h>
using namespace std;

int findFirstOccurence(int arr[], int n, int target)
{

    int start = 0;
    int end = n - 1;
    int ans = -1; // to store the ans

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {

            // 1 Store ans

            ans = mid;

            // 2 go to left
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {

            // got go to left
            end = mid - 1;
        }
        else
        {

            // got to right
            start = mid + 1;
        }
    }

    return ans;
}

int findLastOccurence(int arr[], int n, int target)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {

            //   store
            ans = mid;
            // got to right

            start = mid + 1;
        }
        else if (arr[mid] > target)
        {

            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int totalOccurnce(int arr[], int n, int target)
{

    int firstOccurence = findFirstOccurence(arr, n, target);
    int lastOccurence = findLastOccurence(arr, n, target);

    if (firstOccurence == -1 || lastOccurence == -1)
    {

        return -1;
    }

    int total = (lastOccurence - firstOccurence) + 1;

    return total;
}

int main()
{

    int arr[] = {10, 20, 30, 30, 30, 30, 30, 40, 50};
    int n = 9;

    int target;
    cout << "Enter the Target : ";
    cin >> target;

    // calling function
    int Ans = totalOccurnce(arr, n, target);
    cout << "Ans is : " << Ans << endl;
}