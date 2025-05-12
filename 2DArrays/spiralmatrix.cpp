#include <iostream>
using namespace std;

void spiral(int mat[][4],int n,int m){
 
    int scol=0,srow=0;
    int ecol=m-1,erow=n-1;
while(srow<=erow && scol<=ecol){
        // top
for(int j=scol;j<=ecol;j++){
    cout<<mat[srow][j]<<" ";
}
    //right
for(int i=srow;i<=erow;i++){
    cout<<mat[i][ecol]<<" ";
}
    //bottom 
    if(srow==erow){
        break;
    }
for(int k=ecol-1;k>=scol;k--){
    cout<<mat[erow][k]<<" ";
}
    // left
    if(scol==ecol){
        break;
    }
    for(int l=erow-1;l>=srow+1;l--){
        cout<<mat[l][scol]<<" ";
}
srow++;
scol++;
erow--;
ecol--;
}
}
int main() {
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
spiral(matrix,4,4);
}