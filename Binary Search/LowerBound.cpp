// Give a sorted array and integer x find the lower bound of x

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int x)
{

    int start = 0;
    int end = arr.size() - 1;
    bool flag = false;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            // flag = true;
            return arr[mid - 1];
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
    return arr[end];
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

    cout << "The lower bound of x is: " << lowerBound(arr, x);

    return 0;
}