#include <iostream>
using namespace std;

class shape{
public:
virtual void draw()=0; // pure virtual function or, abstract class 
};

class circle :public shape{
    public:
    void draw(){
        cout<<"draw circle ...\n";
    }
};
class square : public shape{
    public:
    void draw(){
        cout<<"draw square ...\n";
    }
};
int main() {
    circle c1;
    c1.draw();

    square s1;
    s1.draw();

}