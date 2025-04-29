#include <iostream>
using namespace std;
void printsub(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int i=start;i<n;i++){
            for(int j=start;j<=i;j++){
                cout<<arr[j];
            }
            cout<<",";
        }
        cout<<endl;
    }
}
int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
int n=8;
printsub(arr,n);
    return 0;
}