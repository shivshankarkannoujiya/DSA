#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr, int n, int target)
{

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == target)
        {
            return true;
        }
    }

    // nhi mila
    return false;
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = arr.size();
    int target = 70;

    // ccalling function
    bool Ans = linearSearch(arr, n, target);
    if (Ans == true)
    {
        cout << "Element Found !!" << endl;
    }
    else
    {
        cout << "Not Found !!" << endl;
    }
}