#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>>vec={{1,2,3},{4,5},{7,9,0,5,4,3}};

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}