#include <bits/stdc++.h>
using namespace std;

int maximumNumberOfStringPair(vector<string> &pairs)
{
    int n = pairs.size();
    int count = 0;
    unordered_set<string> s;
    for (int i = 0; i < n; i++)
    {
        string rev = pairs[i];
        reverse(rev.begin(), rev.end());
        if (s.find(rev) != s.end())
        {
            count++;
        }
        else
        {
            s.insert(pairs[i]);
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<string> arr;
    cout << "Enter the string elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
    }

    return 0;
}