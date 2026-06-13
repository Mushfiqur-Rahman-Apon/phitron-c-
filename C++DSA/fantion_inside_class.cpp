#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll=roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math+english <<endl;
    }
};
int main()
{  
    student sakib("sakib Ahmed", 23, 85, 92);
    sakib.total();
    
    student rakib("rakib Ahmed",25, 65, 95);
    rakib.total();
    return 0;
}

