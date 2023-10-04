#include <bits/stdc++.h>
using namespace std;

/*
 * printing Solution
 */

void printSolution(vector<vector<char>> &board, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*
 * isSafe
 */

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{

    // current cell [row,col] pr Q rakh skte hai or Not
    int i = row;
    int j = col;

    // 1 :- leftRow
    while (j >= 0)
    {
        if (board[i][j] == 'Q') // pehale se present hai
        {
            return false;
        }
        j--;
    }

    // 2 :- upper left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    // 3 :- Bottom Left Diagonal

    i = row;
    j = col;
    while (i < n && j >= 0)
    {

        if (board[i][j] == 'Q')
        {
            return false;
        }

        i++;
        j--;
    }

    // Kahi bhi Queen nahi mili
    // Position is safe

    return true;
}

/*
 * solve function
 */
void solve(vector<vector<char>> &board, int col, int n)
{
    // 1
    // Base Case [when we have to stop]
    // jab ek sol mil jaye --> sabhi col me "Q" place kr liye ho

    if (col >= n)
    {
        // print sol --> return
        printSolution(board, n);
        return;
    }

    // solve 1 case --> another recursion dekh lega
    for (int row = 0; row < n; row++)
    {

        if (isSafe(row, col, board, n))
        {
            // rakh do
            board[row][col] = 'Q'; // 1 --> Q [solved 1 case]

            // for aage recursive call
            // col:-1 : rakh diya now next col for col+1
            solve(board, col + 1, n);

            // Agle col ---> picchele col pr jae the then
            // BACKTRACKING
            // Queen ko hatana padega
            board[row][col] = '-';
        }
    }
}

int main()
{

    int n;
    cout << "Enter value of n : ";
    cin >> n;

    vector<vector<char>> board(n, vector<char>(n, '-'));

    // Q1-- > pehele 1st col me place kr rhe hai-- > index = 0
    int col = 0;
    solve(board, col, n);
}