#include <iostream>
#include<string.h>
using namespace std;
bool isPalindrome(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(str[st]!=str[end]){
            cout<<"not a valid palindrome ";
            return false;
        }
        st++;
        end--;
    }
    cout<<"valid palindrome ";
            return true;
}

int main() {
    char str[]="racecar";
    isPalindrome(str,strlen(str));
}