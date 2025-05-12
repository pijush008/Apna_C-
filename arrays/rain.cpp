#include <iostream>
using namespace std;

int trap(int *heights,int n){

    int leftmax[20000],rightmax[20000];
    leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(heights[i-1],leftmax[i-1]);
       
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(heights[i+1],rightmax[i+1]);
    }
    int trapwater=0;
    for(int i=0;i<n;i++){
int currwater=min(leftmax[i],rightmax[i])-heights[i];
if(currwater>0){
    trapwater+=currwater;
}

    }
   return trapwater;
}
int main(){
    int heights[7]={4,2,0,6,3,2,5};
    int n=sizeof(heights)/sizeof(int);
  
    cout<<"total rainwater is : "<<trap(heights,n);
}

