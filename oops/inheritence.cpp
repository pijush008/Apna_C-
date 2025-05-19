#include <iostream>
using namespace std;
 
class animal{
public:
string name;
void eat(){
    cout<<"it can eats...\n";
}
void run(){
    cout<<"it can runs ...\n";
}
};

class fish : public animal{   // if we do protected or private then it can not be accessable from outside
public:
int fins;
void swim(){
    cout<<"it can swims ...\n";
}
};
int main() {
    fish f1;
    f1.fins=5;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.run();

}