#include <iostream>
using namespace std;

// floyd's triangle 
int main() {
    int n=5; // no. of rows
    int m=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}