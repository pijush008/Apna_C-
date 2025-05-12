#include <iostream>
using namespace std;

int main() {
    int matrix[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    cout<<matrix<<" = "<<&matrix[0][0]<<endl;
    cout<<matrix+1<<" != "<<&matrix[0][1]<<endl;
    cout<<matrix+1<<" = "<<&matrix[1][0];
}