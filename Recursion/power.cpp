#include <iostream>
using namespace std;
int pow(int x,int n){
    if(n==0) return 1;

    int halfpow=pow(x,n/2);
    int halfpowsquare=halfpow*halfpow;

    if(n%2 !=0) {  // for odd number
        return halfpowsquare*x;
    }
    return halfpowsquare;
}
int main() {
    int x=2,n=10;
    cout<<"answer will be for  x^n :"<<pow(x,n);
}