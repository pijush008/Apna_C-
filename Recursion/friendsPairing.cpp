#include <iostream>
using namespace std;
int friensPairing(int n){
    if(n==1 || n==2) {

        return n;
    }
    return friensPairing(n-1)+(n-1)*friensPairing(n-2);
}
int main() {
    int ways=friensPairing(3);
    cout<<"no.s of ways = "<<ways;
}