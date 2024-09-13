// Given a sorted array of positive numbers, find the smallest positive number missing from the array.

// Example 1:

// Input: arr[] = {1, 2, 3, 4, 6, 7, 8}
// Output: 5
// Explanation: Smallest positive missing
// number is 5
// Example 2:

// Input: arr[] = {10, 2, 1, 4, 5, 6}
// Output: 3

#include <bits/stdc++.h>
using namespace std;

// using Linear Search
int smallestMissing(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (i != arr[i])
        {
            return i;
        }
    }
    return n + 1;
}
// Using Binary Search
int smallestMissingPositive(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1; // if all the elements are present in the array

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == mid)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n); // declaring the array with size n
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // use arr[i] to directly assign values
    }

    cout << "The smallest missing positive number is: " << smallestMissingPositive(arr);

    // cout << "The smallest missing positive number is: " << smallestMissing(arr);

    return 0;
}