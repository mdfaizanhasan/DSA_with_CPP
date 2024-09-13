// Basic Maps
/*
Map - Maps is a collection of key and value pairs that describe the contents of a map.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> mpp;

    // first method
    // pair<string, int> p1;
    // p1.first = "Faizan";
    // p1.second = 10;
    // pair<string, int> p2;
    // p2.first = "harsh";
    // p2.second = 19;
    // pair<string, int> p3;
    // p3.first = "lokesh";
    // p3.second = 16;

    // mpp.insert(p1);
    // mpp.insert(p2);
    // mpp.insert(p3);

    // for(auto p : mpp){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // Second method
    mpp["Faizan"] = 12;
    mpp["Sanket"] = 16;

    for(auto p : mpp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout <<"Size of Maps is: "<< mpp.size() << endl;

    mpp.erase("Sanket");
    cout << "After Erase Value and Key is: " << endl;
    for(auto p : mpp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout << "After Erase Size is: " << mpp.size() << endl;

    return 0;
}