#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main()
{

    // 2D vector
    vector<vector<int>> v(5, vector<int>(10, 0));

    // printing
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << "Row - " << i << " :  ";
    //     for (int j = 0; j < v[i].size(); j++)
    //     {

    //         cout << v[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    // Jagged array

    // 2D
    vector<vector<int>> arr;

    // 1D
    vector<int> v1(10, 0);
    vector<int> v2(5, 1);
    vector<int> v3(8, 2);
    vector<int> v4(7, 1);
    vector<int> v5(20, 0);

    // Push them into 2D
    arr.push_back(v1);
    arr.push_back(v2);
    arr.push_back(v3);
    arr.push_back(v4);
    arr.push_back(v5);

    // printing Jagged Array

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Row - " << i << " :  ";
        for (int j = 0; j < arr[i].size(); j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}