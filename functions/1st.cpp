#include <iostream>
using namespace std;

int sum(int a, int b=2){  // b ka default value nahi lega , jo a raha hai parameter se woh hi lega 
    return a+b;
}
int main() {
    int s = sum(3,4);
    cout<<s;
    return 0;
}