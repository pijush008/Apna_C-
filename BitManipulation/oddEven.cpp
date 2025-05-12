#include <iostream>
using namespace std;

void oddEven(int num){
    if(num&1==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}
int main() {
  oddEven(9);  
}