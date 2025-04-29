#include<iostream>
#define ll long long  // ll= long long   
using namespace std;
int main(){
    const float PI=3.14;
ll y=439759345;
cout<<y<<endl;
cout<<PI<<endl;
cout<<(10/3)<<endl;
cout<<(10/3.0)<<endl; /// very important thing -> called type promotion

// implicit conversion
cout<<('A'+1)<<endl;
cout<<('a'-1)<<endl;


// explicit conversion
cout<<(int)(PI)<<endl;
cout<<(float)(10/3)<<endl;
cout<<(char)('A'+1)<<endl;
cout<<((bool)4+2)<<endl; // only (bool)0=0 otherwise all value=1


// biinary -> +,-,/,* ,&&,||   unary-> ++,--,!
int a=3;
int b=a++;
cout<<"a="<<a<<"\n";
cout<<"b="<<b<<endl;

cout<<"*************************"<<endl;

char ch='A';
for(int i=1;i<=4;i++){
    cout<<ch<<" ";
    ch++;
}

}