#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
          arr[prev+1]=arr[prev];
          prev--;
        }
      arr[prev+1]=curr;
    }
    print(arr,n);
}
int main() {
    int arr[] = {5, 4, 1,10, 3, 2, 9, 8, 0};
    int n = sizeof(arr) / sizeof(int);
    insertion(arr, n);
}