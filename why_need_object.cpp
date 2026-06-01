#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
    
};
student* fun()
{
    student karim(2,5,5.00);
    student* p = &karim;
    return p;
}

int main()
{   student* p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;


    
    return 0;
}