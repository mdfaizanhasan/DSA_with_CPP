// WAP to print the peak index in a mountain array. A mountain array is an array where the first element is the smallest and the last element is the largest. The elements in between are in increasing order and then decreasing order.

#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 1;
    int end = arr.size() - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The peak index is: " << peakIndexInMountainArray(arr);

    return 0;
}