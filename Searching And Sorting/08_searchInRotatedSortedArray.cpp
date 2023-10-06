#include <bits/stdc++.h>
using namespace std;

// pivotIndex

int findPivotIndex(vector<int> &nums)
{

    int n = nums.size();
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        // mid
        int mid = start + (end - start) / 2;

        // 1 Corner case

        if (start == end)
        {
            return start;
        }

        // check case

        if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
        {

            return mid - 1;
        }
        else if (mid + 1 < n && nums[mid] > nums[mid + 1])
        {

            return mid;
        }
        else if (nums[start] > nums[mid])
        { // checking for line A and B

            // goto  left
            end = mid - 1;
        }
        else
        {
            // goto right
            start = mid + 1;
        }
    }

    return -1;
}

// Binary Search
int binarySearch(vector<int> &nums, int start, int end, int target)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (target == nums[mid])
        {

            return mid;
        }

        if (target > nums[mid])
        {
            // goto right
            start = mid + 1;
        }
        else
        {

            // goto left
            end = mid - 1;
        }

        // update mid
        mid = start + (end - start) / 2;
    }

    // if not found
    return -1;
}

int search(vector<int> &nums, int target)
{

    int pivotIndex = findPivotIndex(nums);
    int n = nums.size();
    int ans = -1;

       if (target >= nums[0] && target <= nums[pivotIndex])
    {
        // search in A
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    else
    {

        // Search part B
        ans = binarySearch(nums, pivotIndex + 1, n - 1, target);
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 3}; // Corner case
    // vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int n = nums.size();
    int target;
    cout << "Enter Target : ";
    cin >> target;

    // calling function
    int ansIndex = search(nums, target);
    cout << "Ans is : " << ansIndex << endl;
}