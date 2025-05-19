#include <iostream>
using namespace std;

class complex {
    int rel;
    int img;

public:
    // Constructor
    complex(int r, int i) {
        rel = r;
        img = i;
    }

    // Method to display the complex number
    void show() {
        cout << rel << "+" << img << "i" << endl;
    }

    // Operator overloading for +
    complex operator + (complex &c2) {
        int resrel = this->rel + c2.rel;
        int resimg = this->img + c2.img;
        return complex(resrel, resimg); // return new complex object
    }
};

int main() {
    complex c1(1, 2);
    complex c2(3, 4);

    c1.show();
    c2.show();

    complex c3 = c1 + c2; // Uses overloaded operator+
    cout << "Result = ";
    c3.show();

    return 0;
}
