#include <iostream>
using namespace std;
void print(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion(char arr[],int n){
    for(int i=0;i<n;i++){
        char curr=arr[i];
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
    char arr[] = {'s','t','p','r','a','e','w','x','q','b','z'};
    int n = sizeof(arr) / sizeof(char);
    insertion(arr, n);
}
 /// time complexity = o(n^2)