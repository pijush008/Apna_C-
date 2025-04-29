
#include<iostream>
using namespace std;
int main(){
    float pencil;
    float pen;
    float eraser;
    
    cout<<"Pencil price : ";
    cin>>pencil;
    
    cout<<"Pen price : ";
    cin>>pen;
    
    cout<<"eraser price : ";
    cin>>eraser;
    
    float sum=0;
    sum=pencil+pen+eraser;
    
    cout<<"Total price with 18% gst : "<<sum+(sum*0.18)<<endl;
}




