#include <iostream>
using namespace std;

int main() {
    int arr[]={1,3,3,3,4,4};
     int length=sizeof(arr)/sizeof(int);

     cout<< "size of array is "<< length<<endl;

     for(int i=0;i<=length-1;i++){
        cout<<arr[i]<<" ";
     }
    return 0;