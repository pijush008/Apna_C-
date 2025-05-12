#include <iostream>
using namespace std;

int getthebit(int num,int i){
    int bitmask=num<<i;
    if(!(num & bitmask)){
        return 1;
    }else{
        return 0;
    }
}

int setithbit(int num,int i){
    int bitMask=1<<i;
    return (num | bitMask);
}

int clearthebit(int num,int i){
    int bitmask=~(1<<i);
    return (num & bitmask);
}

bool ispowerof2(int num){
    if(!(num  & (num-1))){
        return true;
    }else{
        return false;
    }
}

void updateithbit(int num,int i,int val){
    num=num & ~(1<<i);  // clear ith bit
    num = num<<i;
    cout<<num<<endl;
}

void clearibits(int num,int i){
    int bitmask = (~0)<<i;
     num = num & bitmask;

     cout<<num<<endl;
}

int countsetbits(int num){
    int count=0;
    while(num > 0){
        int lastdig= num & 1;
        count+=lastdig;

       num= num>>1;
    }
    cout<<count<<endl;
    return count;
}

void fastexpo(int x, int n){
    int ans=1;

    while(n>0){
        int lastbit = n & 1;
      if(lastbit){
        ans*=x;
      }
      x*=x;
      n=n >>1;

    }
cout<<ans<<endl;
}
int main() {
    cout<<getthebit(6,2)<<endl;
    cout<<setithbit(6,3)<<endl;
    cout<<clearthebit(6,1)<<endl;
    cout<<ispowerof2(16)<<endl;
    updateithbit(7,2,0);
    clearibits(6,2);
    countsetbits(10);
    fastexpo(3,5);
}