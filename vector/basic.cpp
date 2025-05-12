#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector <int>vec1;
   cout<<"size :"<<vec1.size()<<" "<<"capacity :"<<vec1.capacity()<<endl;
   vec1={2,4,5,1,3,2};
   cout<<"size :"<<vec1.size()<<" "<<"capacity :"<<vec1.capacity()<<endl;
   vec1.push_back(12);
   cout<<"size :"<<vec1.size()<<" "<<"capacity :"<<vec1.capacity()<<endl;
   vec1.pop_back();
   cout<<"size :"<<vec1.size()<<" "<<"capacity :"<<vec1.capacity()<<endl;
   vector <int>vec2(10,-1);
   cout<<"size :"<<vec2.size()<<" "<<"capacity :"<<vec2.capacity()<<endl;

   for(int i=0;i<vec2.size();i++){
    cout<<vec2[i]<<" ";
   }
}