#include <bits/stdc++.h>
using namespace std;

void sortColor(vector<int> &v)
{

    int n = v.size();
    int index = 0;
    int left = 0;
    int right = n - 1;

    while (index <= right)
    {

        if (v[index] == 0)
        {

            // swap
            swap(v[index], v[left]);
            left++;
            index++;
        }
        else if (v[index] == 2)
        {

            swap(v[index], v[right]);
            right--;
        }
        else
        {

            index++; // index ==1;
        }
    }
}

// printing the vector

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
}

int main()
{

    vector<int> v = {0, 1, 2, 0, 2, 1, 0, 1, 1, 2, 0};

    cout << "Printing Array Before sorting ......." << endl
         << endl;

    printVector(v);
    cout << endl;
    cout << endl;

    sortColor(v);
    cout << "Printing Array After sorting ......." << endl
         << endl;
    printVector(v);
    cout << endl;
    cout << endl;
    return 0;
}