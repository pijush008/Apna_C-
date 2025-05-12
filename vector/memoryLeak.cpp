#include <iostream>
using namespace std;
int* func(){
int *ptr= new int;
*ptr=1220;
cout<<"the pointer is pointing on "<<*ptr<<endl;

return ptr;
}
int main() {
    int *x=func();
    cout<<*x;
}