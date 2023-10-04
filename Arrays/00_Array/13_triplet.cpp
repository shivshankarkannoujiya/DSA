#include <bits/stdc++.h>
using namespace std;

void printTriplets(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        // cout << " i  is  : " << i;
        for (int j = 0; j < n; j++)
        {
            // cout << " j  is  : " << j;
            for (int k = 0; k < n; k++)
            {
                // cout << " k  is  : " << k << endl;
                cout << arr[i] << " , " << arr[j] << " , " << arr[k] << endl;
            }
            cout << endl;
            cout << "update j..." << endl;
            cout << endl;
        }

        cout << endl;
        cout << "update i..." << endl;
        cout << endl;
    }
}


int main()
{

    int arr[] = {10, 20, 30};
    int n = 3;

    // calling function
    cout << endl;
    printTriplets(arr, n);
    cout << endl;
    return 0;
}