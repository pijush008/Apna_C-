#include <iostream>
using namespace std;

void print(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
}
int main() {
    int arr[]={1,2,3,4,5,6,7,6,9,0,3,2};
    int n=sizeof(arr)/sizeof(int);
    print(arr,n);
    return 0;
}