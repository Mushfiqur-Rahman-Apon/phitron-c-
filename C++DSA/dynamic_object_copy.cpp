#include<bits/stdc++.h>
using namespace std;

class cricketer
{
    public:
    string country;
    int jersey;
    cricketer(string country,int jersey)
    {
        this->country =country;
        this->jersey = jersey;
    }
    

};
int main()
{ 
    cricketer* dhoni = new cricketer("India",100);
    cricketer* kohli = new cricketer("India",77);
    *kohli =  *dhoni;
    delete dhoni;
    cout << kohli-> country << " " << kohli->jersey << endl;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {   string s = "hello";
//     for(char ch:s)
//     {
//         cout <<ch << " " ;
//     }
//     return 0;
// }