#include <iostream>
#include<vector>
using namespace std;
int firstoccurance(vector<int>arr,int i,int target){
    if(i==arr.size()) return -1; 

    if(arr[i]==target) return i;
return firstoccurance(arr,i+1,target);
}

int lastoccur(vector<int>arr,int i,int target){
    if(i==arr.size()) return -1;

    int idxfound=lastoccur(arr,i+1,target);
    if(idxfound==-1 && arr[i]==target ){
        return i;
    }
    return idxfound;
}
int main() {
    vector<int>arr={1,2,3,3,3,5};
    cout<<"first occurance of 3 is at idx : "<<firstoccurance(arr,0,3)<<endl;

     cout<<"last occurance of 3 is at idx : "<<lastoccur(arr,0,3);
}