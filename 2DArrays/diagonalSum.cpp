#include <iostream>
using namespace std;

int diagonal(int matrix[][3],int n,int m){
    int sum=0;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i==j){
    //             sum+=matrix[i][j];
    //         } else if(j==n-i-1){
    //             sum+=matrix[i][j];
    //         }
    //     }
    // }     // TC is o(n^2)
   

    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
        if(i!=n-i-1){
            sum+=matrix[i][n-i-1];
        }
    }    // TC is O(n)

    return sum;
}
int main() {
    int matrix[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    cout<<"sum is :"<<diagonal(matrix,3,3);
}