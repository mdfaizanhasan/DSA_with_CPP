// Given a sorted array of integers, find the starting and ending position of a given target value. Your algorithm's runtime complexity must be in the order of O(log n). If the target is not found in the array, return [-1, -1].

#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int first = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int last = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return last;
}

vector<int> firstLastOccurrence(vector<int> &arr, int x)
{
    int first = firstOccurrence(arr, x);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurrence(arr, x);
    return {first, last};
}

// Second Method
vector<int> firstLastOccurrences(vector<int> &nums, int target)
{
    // create an empty vector to store the indices
    vector<int> v;
    // traverse the vector
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        if (nums[low] == target && nums[high] == target)
        {
            v.push_back(low);
            v.push_back(high);
            return {low, high};
        }
        else if (nums[low] < target)
            low = low + 1;
        else
            high = high - 1;
    }
    return {-1, -1};
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

    int x;
    cout << "Enter the x: ";
    cin >> x;

    // vector<int> ans = firstLastOccurrence(arr, x);
    // cout << "The first and last occurrence of " << x << " is: " << ans[0] << " " << ans[1];

    vector<int> ans = firstLastOccurrences(arr, x);
    cout << "The first and last occurrence of " << x << " is: " << ans[0] << " " << ans[1];

    return 0;
}