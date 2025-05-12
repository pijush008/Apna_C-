#include <iostream>
using namespace std;

void func(int matrix[][3],int n,int m){
cout<<" 0th row pointer : "<<matrix<<endl;
cout<<" 1st row pointer : "<<matrix+1<<endl;
cout<<" 2nd row pointer : "<<matrix+2<<endl;
cout << "value of 0th row pointer : " << *(*matrix) << endl;        
cout << "value of 1st row pointer : " << *(*(matrix + 1)) << endl; 
cout << "value of 2nd row pointer : " << *(*(matrix + 2)) << endl;

cout<<"***************"<<endl;
cout<<"value ith pointer : "<<*(*(matrix+2)+2)<<endl;
}
int main() {
    int matrix[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    func(matrix,3,3);
}