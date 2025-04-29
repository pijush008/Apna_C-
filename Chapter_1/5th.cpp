#include<iostream>
using namespace std;
int main(){
    // sum of odd digits in a number
    int n;
    cout<<"ener number : ";
    cin>>n;
   int sum=0;
   int lastdig;
  while(n>0){
   lastdig=n%10;
   if(lastdig%2!=0){
    sum+=lastdig;
   }
   n=n/10;
  }
  cout<<sum;
}