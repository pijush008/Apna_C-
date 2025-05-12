#include <iostream>
using namespace std;

int main() {
    char word[30];
    cout<<"enter your word ";
    cin>>word;
    cout<<"your word was : "<<word<<endl;

    char sentence[80];
    cout<<"enter your senetence : ";
    cin.getline(sentence,80,'.');  // after putting '.' this can stop taking input
    cout<<"your senetnce was : "<<sentence;
}