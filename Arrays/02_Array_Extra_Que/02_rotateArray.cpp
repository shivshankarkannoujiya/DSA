#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &v, int k)
{

    int n = v.size();
    vector<int> ans(n);

    for (int index = 0; index < n; index++)
    {

        int newIndex = (index + k) % n;
        ans[newIndex] = v[index];
    }

    // change in same array 
    v = ans;
}

// printArray
void printArray(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int k;
    cout << "Enter the value of K : ";
    cin >> k;

    cout << endl;
    cout << "Printing Array before Rotating ......." << endl;
    cout << endl;
    printArray(arr);
    cout << endl;

    // calling function
    rotateArray(arr, k);
    cout << endl;
    cout << "Printing Array after Rotating ......." << endl;
    cout << endl;
    printArray(arr);
    cout << endl;
    cout << endl;
}