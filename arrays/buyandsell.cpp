#include <iostream>
using namespace std;
void  printprofit(int *price,int n){
int bestbuy[100000];
bestbuy[0]=INT_MAX;
for(int i=1;i<n;i++){
bestbuy[i]=min(bestbuy[i-1],price[i-1]);

}
int maxprofit=0;
for(int j=0;j<n;j++){
    int currprofit=price[j]-bestbuy[j];  // assume all day is sell day 
    maxprofit=max(maxprofit,currprofit);
}
cout<<"max profit is "<<maxprofit<<endl;
}
int main() {
    int price[]={23,1,4,56,7,89,99,67,4,56,4,3};
    int n=sizeof(price)/sizeof(int);
    printprofit(price,n);
    return 0;
}