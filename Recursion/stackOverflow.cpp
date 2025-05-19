#include <iostream>
using namespace std;
void func(){
    // cout<<"stack overfolw afetr a time ..."<<endl;
    // func();   // afeter a time it will show "segementation fault"
}
int main() {
    func();
}