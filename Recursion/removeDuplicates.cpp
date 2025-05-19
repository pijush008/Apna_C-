#include <iostream>
#include<string>
using namespace std;

void duplicates(string str,string ans,int i,int map[26]){
char ch=str[i];
int mapIdx=(int)(ch-'a');

if(i==str.size()){
    cout<<"ans : "<<ans;
    return;
}
if(map[mapIdx]==true){  // duplicates
 duplicates(str,ans,i+1,map);
}else{  // not duplicates
    map[mapIdx] = true;
duplicates(str,ans+str[i],i+1,map);
}

}
int main() {
    string str="appnacollege";
    string ans="";
    int map[26]={false};
    duplicates(str,ans,0,map);
}