#include <iostream>
using namespace std;

bool stair(int matrix[][3],int n,int m,int key){

    int i=0,j=m-1;
    while(i<n && j>=0){
        if(key==matrix[i][j]){
            cout<<"key found at : "<<i<<" "<<j<<", for key : "<<key;
            return true;
        }else if(matrix[i][j]>key){
            j--;
        }else if(matrix[i][j]<key){
            i++;
        }
    }
    cout<<"key is not found";
    return false;
}
int main() {
    int matrix[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    stair(matrix,3,3,10);
}