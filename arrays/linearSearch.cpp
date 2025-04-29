#include <iostream>
using namespace std;

int linear(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}
int main() {
    int arr[]={2,4,6,2,1,6,8,93,67,8};
    int n=sizeof(arr)/sizeof(int);

    cout<<"the key index is "<<linear(arr,n,8)<<endl;
    return 0;
}