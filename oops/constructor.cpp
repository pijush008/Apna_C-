#include <iostream>
using namespace std;

class car{
string name;
string color;

public:
car(){
    cout<<"it's a non-parameterized constructor\n";
}
car(string newname,string newcolor){ // constructor with parameters
    cout<<"constructor has called and objected has creted"<<endl;
    this->name=newname;
    this->color=newcolor;

}
void start(){
    cout<<"car has started ...";
}
void stop(){
    cout<<"car has stopped ....";
}
string getcar(){
    return name;
}
};
int main() {
    car c0;  // non parameterized constructor
    car c1("BMW `1200","white");  // parameterized constructor
    cout<<"car name  is "<<c1.getcar()<<endl;
}