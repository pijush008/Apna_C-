#include <iostream>
using namespace std;
int tiling(int n){
    if(n==0 || n==1) return 1;

    // vertical
    int ans1=tiling(n-1); // 2*(n-1)

    // horizontal
    int ans2=tiling(n-2); // 2*(n-2)

    return ans1+ans2;
}
int main() {
    int n=3;
    cout<<tiling(n);
}