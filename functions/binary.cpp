#include <iostream>
using namespace std;

void binToDec(int bin){
    int n=bin;
 int dec=0;
int base =1;
    while(n>0){
        int lastdig=n%10;
dec+= lastdig*base;
base*=2;
n/=10;
    }
    cout<<dec<<endl;
}

void decTobin(int dec){

int bin=0;
int pow=1;
int dig;
    while(dec>0){
       dig= dec%2;
  bin=dig*pow;
  dec/=2;
  pow*=10;
    }
    cout<<bin<<endl;
}
int main() {
   // binToDec(1011);
    decTobin(4);

    return 0;
}