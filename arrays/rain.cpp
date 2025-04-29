#include <iostream>
using namespace std;

void trap(int *heights,int n){

    int leftmax[20000],rightmax[20000];
    leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(heights[i-1],leftmax[i-1]);
       
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(heights[i+1],rightmax[i+1]);
      `