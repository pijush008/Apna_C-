#include <iostream>
using namespace std;

bool check(int a){
    if(a%2==0) return true;
    else return false;
}
int main() {
    int n;
    cout<<"enter your number : ";
    cin>>n;
    char c;
    if(check(n)==0) c='F';
    else c='T';
    cout<<"number is even :"<<c<<endl;
    return 0;
}