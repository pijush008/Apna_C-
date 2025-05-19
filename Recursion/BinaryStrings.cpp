#include <iostream>
using namespace std;
void binaryStrings(int n,int lastplace,string ans){
if(n==0){
    cout<<ans<<endl;
    return;
}
if(lastplace!=1){
    binaryStrings(n-1,0,ans+'0');
    binaryStrings(n-1,1,ans+'1');
}else{
binaryStrings(n-1,0,ans+'0');
}
}
int main() {
    string ans="";
binaryStrings(3,0,ans);
}