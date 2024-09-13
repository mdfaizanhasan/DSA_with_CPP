// WAP to print the Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
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

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int index = binarySearch(arr, key);
    if (index != -1)
    {
        cout << "The index of the key is: " << index << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    return 0;
}