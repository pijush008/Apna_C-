#include <iostream>
using namespace std;

class teacher{
public:
int salary;
string subject;

};
class student{
    public:
int rollNo;
float cgpa;
};
class TA:public teacher,public student{
    public:
string name;
};
int main() {
    TA t1;
    t1.name="Shraddha";
    t1.subject="C++";
    t1.rollNo=123;
    t1.cgpa=9.6;

    cout<<t1.name<<endl;
    cout<<t1.cgpa<<endl;
    cout<<t1.rollNo<<endl;
cout<<t1.subject;
}