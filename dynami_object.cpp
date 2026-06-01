#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student* fun()
{
    Student* karim = new Student(2,5,5.00);
    return karim;
}
int main()
{   
    return 0;
}