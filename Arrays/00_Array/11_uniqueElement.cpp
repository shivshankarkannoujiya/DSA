#include <bits/stdc++.h>
using namespace std;

int getUnique(int arr[], int n)
{

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int n = 10;

    // function call
    int uniqueElement = getUnique(arr, n);
    cout << "Unique Element is : " << uniqueElement << endl;
    cout << endl;
}