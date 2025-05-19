#include <iostream>
using namespace std;

class user{
private:
string id;
string password;

public:
string username;
user(string id){
    this->id=id;
}

void setPassword(string password){
    this->password=password;
}
string getPassword(){
return password;
}

};
int main() {
    user user1("10rr8");
    user1.username="pijush";
    user1.setPassword("123mygdbjk");

    cout<<"username is :"<<user1.username<<endl;
    cout<<"password is : "<<user1.getPassword()<<endl;



}