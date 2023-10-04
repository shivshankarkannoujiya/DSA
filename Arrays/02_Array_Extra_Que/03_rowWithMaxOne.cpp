#include <bits/stdc++.h>
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{

    // create new vector to push ans return
    vector<int> ans;
    int n = mat.size(); // total row

    // store max no of 1's
    int oneCount = INT_MIN;
    int rowIndex = -1;

    // access row-wise
    for (int i = 0; i < n; i++)
    {

        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {

            if (mat[i][j] == 1)
            {
                count++;
            }
        }

        // after each row compare count and oneCount
        if (count > oneCount)
        {

            oneCount = count;
            rowIndex = i;
        }
    }

    ans.push_back(rowIndex);
    ans.push_back(oneCount);
    return ans;
}

// main
int main()
{

    vector<vector<int>> mat = {

        {1, 0, 0, 1},
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 1},
    };

    // calling function
    vector<int> maxOnes = rowAndMaximumOnes(mat);

    // printing the Ans array
    cout << "Ans is : ";
    for (int i = 0; i < maxOnes.size(); i++)
    {

        cout << maxOnes[i] << "  ";
    }

    cout << endl;
    cout << endl;

    return 0;
}