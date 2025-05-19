#include <iostream>
using namespace std;

class print{
public:
void show(int x){
    cout<<"int "<<x<<endl;
}
void show(string str){
    cout<<"string is "<<str<<endl;
}
};
int main() {
    print obj1;
    obj1.show(34);
    obj1.show("hello");
}