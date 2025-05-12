#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char arr[5]={'c','o','d','e','\0'};
    char str[5]={'c','o','l','d'};
    char str1[4]={'g','o','o','d'};
    char str2[]="hello guys";
    cout<<arr<<" "<<strlen(arr)<<endl;
    cout<<str<<" "<<strlen(str)<<endl;
    cout<<str1<<" "<<strlen(str1)<<endl;
    cout<<str2<<" "<<strlen(str2)<<endl;
}