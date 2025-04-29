#include <iostream>
using namespace std;

int main() {
    int arr[]={3,4,6,7,8,8,56,456,6,5,65,7,4,67};
    int n=sizeof(arr)/sizeof(int);

    int max=arr[0];
    for(int i=0;i<n;i++){
if(arr[i]>max){
    max=arr[i];
}

    }
cout<<"max value is "<<max<<endl;
cout<<arr<<endl;
cout<<*arr<<" "<<*(arr+1)<<endl;
    return 0;
}