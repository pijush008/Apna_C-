#include <iostream>
using namespace std;
void count(){
    static int count=0;  // static variable belong lifetime in memory
    count++;
    cout<<"count is : "<<count<<endl;
}
int main() {
    count();
    count();
    count();
}