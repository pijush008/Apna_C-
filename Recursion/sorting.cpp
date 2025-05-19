#include <iostream>
using namespace std;
 bool isSorted(int arr[],int n,int i){
    if(i==n-1) return true;
    if(arr[i]>arr[i+1]) return false;


   return isSorted(arr,n,i+1);
 }
int main() {
    int arr[5]={1,3,5,7,8};
    int brr[5]={4,5,2,8,9};
    cout<<isSorted(arr,5,0)<<endl;  // sorted 
       cout<<isSorted(brr,5,0)<<endl;  // unsorted
}