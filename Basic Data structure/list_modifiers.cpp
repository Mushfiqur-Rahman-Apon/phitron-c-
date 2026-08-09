#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,50,60,70}

    // list<int> l = {10,20,30};
    // list<int> l2 = {100,200};
    // vector<int> v = {2,3,4};

    // l.push_back(40);
    // l.push_front(100);

    //l.insert(next(l.begin(),2), v.begin(),v.end());
    // l.erase(next(l.begin(),2), next(l,begin(),5));
    // cout << *next(l.begin(),1);

    // auto it = find(l.begin(), l.end(),200);
    // if(it == l.end())
    auto it = find(l.begin(),end(), 200);
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

} 