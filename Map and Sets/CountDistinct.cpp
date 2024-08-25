#include <bits/stdc++.h>
using namespace std;

int reverse_vector(int n)
{
    int r = 0;
    while (r > 0)
    {
        r *= 10;
        r += (n % 10);
        n /= 10;
    }
    return r;
}

int countDistinctInteger(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> set;
    for (int i = 0; i < n; i++)
    {
        int rev = reverse_vector(nums[i]);
        set.insert(nums[i]);
        set.insert(rev);
    }
    return set.size();
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the array of elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Number of Distinct integer after reverse: " << countDistinctInteger(arr);

    return 0;
}