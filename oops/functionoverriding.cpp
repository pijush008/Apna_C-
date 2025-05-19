#include <iostream>
using namespace std;

class parent{
    public:
void show(){
    cout<<"showing parent class ...";
}

// virtual functions 
virtual void hello(){
    cout<<"parent hello ..."<<endl;
}
};
class child:public parent{
public:
void show(){
    cout<<"child class is showing ..."<<endl;
}
void hello(){
    cout<<"child hello ..."<<endl;
}
};
int main() {
    child c1;
c1.show();

parent *ptr;
ptr=&c1; // runtime binding
ptr->hello(); // virtual function
}