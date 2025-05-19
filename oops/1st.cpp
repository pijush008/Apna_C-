#include <iostream>
using namespace std;

class student{
// properties 
private:
string password;

public:
string name;
float cgpa;

// methods
void getpercentage(){
cout<<(10*cgpa)<<" "<<endl;
}

// setters -> write the function name with starting "set" word
void setPass(string newpass){
   password=newpass;
}

// getters
string getPass(){
   return password;
}

};

int main() {
    student s1;   // s1 is the object of sudent class
    cout<<sizeof(s1)<<" bytes"<<endl; 
    s1.name="krishna";
    s1.cgpa=9.8;
cout<<s1.name<<" "<<s1.cgpa<<" "<<endl;
s1.getpercentage();

// by getters and setters 
s1.setPass("Radha123");
cout<<s1.getPass()<<endl;

}