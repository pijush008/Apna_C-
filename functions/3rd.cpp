#include <iostream>
using namespace std;

int fact(int a){
    int i=1;
    for(int j=1;j<=a;j++){
        i*=j;
    }
    return i;
}
int ncr(int n,int r){
    int factn=fact(n);
    int factr=fact(r);
    int factnr=fact(n-r);
    int res=factn/(factr*factnr);
    return res;
}
int main() {
    cout<<ncr(4,2);
    return 0;
}