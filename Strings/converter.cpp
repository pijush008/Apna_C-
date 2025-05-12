#include <iostream>
#include<string.h>
using namespace std;
// to convert lowercase to uppercase 
void toUpper(char word[],int n){
    for(int i=0;i<n;i++){
        if(word[i]>='A' && word[i]<='Z'){
            continue;
        } if(word[i]>='a' && word[i]<='z'){
            word[i]=word[i]-'a'+'A';
        }
    }
}
void toLower(char word[],int n){
    for(int i=0;i<n;i++){
        if(word[i]>='a' && word[i]<='z'){
            continue;
        }else{
            word[i]=word[i]-'A'+'a';
        }
    }
}
void reverse(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}
int main() {
    char word[]="ApPle";
    cout<<word<<endl;
    toUpper(word,strlen(word));
    cout<<"upper case word will be : "<<word<<endl;
    toLower(word,strlen(word));
    cout<<"lower case word will be : "<<word<<endl;
    reverse(word,strlen(word));
    cout<<"reverse word will be : "<<word;
}