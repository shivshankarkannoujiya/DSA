#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &v)
{

    for (auto it : v)
    {
        cout << it << " ";
    }
}

// Comparator
bool myComparator(int &a, int &b)
{

    return a > b;
}

int main()
{

    vector<int> v = {5, 4, 6, 3, 7, 2, 1};

    // Using Built-in sort() :-
    // sort(v.begin(), v.end());  //sort in Increasing order
    // printArray(v);

    // Sorting in Decreasing order
    sort(v.begin(), v.end(), myComparator);
    printArray(v);
}