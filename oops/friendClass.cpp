#include <iostream>
using namespace std;
class A{
string secret="secret data";
friend class B;   // B can access this private data
friend void revealsecret(A &obj);
};
class B{
    public:
void print(A &obj){
    cout<<obj.secret<<endl;
}
};
void revealsecret(A &obj){
    cout<<obj.secret<<endl;
}
int main() {
    A a1;
    B b1;

    b1.print(a1);
    revealsecret(a1);
}