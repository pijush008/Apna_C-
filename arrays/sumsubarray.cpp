#include <iostream>
using namespace std;

// time complexity is(o(n^3))
void printsumsub(int *arr,int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int i=start;i<n;i++){
            int sum=0;
            for(int j=start;j<=i;j++){
               sum+=arr[j];
               
            }
            cout<<sum<<",";
            maxsum=max(maxsum,sum);
        }
        cout<<endl;
        
    }
    cout<<"max sum is : "<<maxsum;
}


// alternative method for o(n^2)
void printsumsub2(int *arr,int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int i=start;i<n;i++){
          
               sum+=arr[i];
            maxsum=max(maxsum,sum);
        }
        
    }
    cout<<"max sum is : "<<maxsum;
}

// best method o(n) , Kadne's algorithm
void printsumsub3(int *arr,int n){
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
sum+=arr[i];
maxsum=max(sum,maxsum);
if(sum<0){
    sum=0;
}
    }
    cout<<"max sum is : "<<maxsum;
}
int main() {
    int arr[8]={1,-2,-3,4,-5,6,7,-8};
int n=8;
printsumsub3(arr,n);
    return 0;
}