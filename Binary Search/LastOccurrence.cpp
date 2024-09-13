// Given an array of n elements and a target x, find the last occurrence in x array. if 'x' does not exist in the array return -1

#include <bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int> &arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            if (arr[mid + 1] == x)
            {
                start = mid + 1;
            }
            else
            {
                return mid;
            }
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
    return -1;
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

    cout << "The last occurrence of " << x << " is: " << lastOccurrence(arr, x);

    return 0;
}