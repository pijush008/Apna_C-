#include <iostream>
using namespace std;

int main() {
    string str="hello guys, I love coding";
    cout<<"string length is "<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str.at(1)<<endl;
    cout<<str.substr(1,5)<<endl;
    cout<<str.find("love")<<endl; // find the keyword lies in which position
    
}