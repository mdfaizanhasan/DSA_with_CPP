#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(20);
    s.insert(30);
    s.insert(4);
    s.insert(50);
    s.insert(21);

    cout << "Size of set is: " << s.size() << endl;

    // s.find() searches in set and if not found, returns s.end() which is the iterator next to the last value in the set.
    // int target = 4;
    // if (s.find(target) != s.end())
    // {
    //     cout << "Target Matched." << endl;
    // }
    // else
    // {
    //     cout << "Target Not Found." << endl;
    // }

    // cout << "Sts Elements are: ";
    // for (int ele : s)
    // {
    //     cout << ele << " ";
    // }

    return 0;
}