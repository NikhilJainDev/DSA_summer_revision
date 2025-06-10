#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // for input = 153 
    int digit = 153;
    int temp = digit;
    int ans = 0,  remd;
    while(digit != 0){
        remd = digit % 10;
        ans = ans + (remd * remd * remd);
        digit = digit / 10 ;
    }

    if(ans == temp){
        cout<<" Armstrong Number "<<endl;
    }
    else{
        cout<<" Not Armstrong Number "<<endl;
    }
};
