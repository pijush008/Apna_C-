#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<"*********"<<endl;
    str="hellllo guys";   // we can manupulate string values
    cout<<str<<endl;
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<"-";
    }
    cout<<endl;
    for(char ch: str){  // for each loop
        cout<<ch<<",";
    }
}