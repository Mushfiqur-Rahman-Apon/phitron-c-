#include<bits/stdc++.h>
using namespace std;

int nodeLevel(int val)
{
    if(val <= 0) return -1; // Invalid value
    int level = 0;
    while(val > 1)
    {
        val /= 2;
        level++;
    }
    return level;
}

int main()
{   
    int val;
    cin >> val;
    int level = nodeLevel(val);
    if(level == -1)
    {
        cout << "Invalid value" << endl;
    }
    else
    {
        cout << level << endl;
    }
    return 0;
}