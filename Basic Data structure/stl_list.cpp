#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l = (1,2,3,4,5);
    list<int>l2(l);
    for(int val :l2)
    // 12.assign(l.begin(),l.end())
    {
        cout << val << endl;
    }
    return 0; 
}