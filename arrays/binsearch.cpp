#include <iostream>
using namespace std;
int binsc(int *arr,int n,int key){
    int start=0,end=n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
if(arr[mid]==key){
    return mid;
}else if(arr[mid]>key){
    end=mid-1;
}else{
    start=mid+1;
}
    }
    return -1;
}

int main() {
   int arr[]={1,3,4,5,6,9,78,450,678,945}; // only for sorted array
   int n=sizeof(arr)/sizeof(int);
   
   cout<<"Position of the key for binary search is : "<<binsc(arr,n,600)<<endl;
    return 0;
}