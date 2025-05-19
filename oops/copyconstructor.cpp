#include <iostream>
using namespace std;
class car{
public:
string color;
string name;
int *milage;

car(string color, string name){
    this->color=color;
    this->name=name;
    milage=new int; // dynamacally alloted 
    *milage=12;  // called shallow copy -> change both c1 and c2
}
car(car &original){
    cout<<"copying original to new ..."<<endl;
    name=original.name;
    color=original.color;
    milage= new int;
    *milage=*original.milage;  // deep copy -> change where need
}

~car(){   // destructor
    cout<<"deleting the object ..."<<endl;
    if(milage!=NULL){
        delete milage;
        milage=NULL;
       
    }
}
};
int main() {
    car c1("white","bmw");
    car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*(c2.milage)<<endl;

    *c2.milage=10;
    cout<<*c1.milage<<endl;
    cout<<*c2.milage<<endl;

}