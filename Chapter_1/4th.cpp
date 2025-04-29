#include<iostream>
using namespace std;
int main(){
    int salary;
    float tax;
    cout<<"enter your salary in lakhs : ";
    cin>>salary;

    if(salary<5){
        // no tax
tax=0;
    }else if(salary>=5 && salary<=10){
        // 5% tax
        tax=0.05*salary;
    }else{
        // 10% tax
tax=0.1*salary;
    }
    cout<<"your tax will be : RS. "<<tax*100000<<endl;
}