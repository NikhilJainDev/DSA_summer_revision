#include<iostream>
#include<math.h>
using namespace std;
// Convert Decimal to Binary Number System 

int decToBin(int number){
    int ans = 0, digit = 1, remd;
    // Write logic here 
    while(number != 0){
        remd = number % 2;
        number = number / 2;
        ans = ans + remd * digit;
        digit = digit * 10;
    }
    return ans;
}

int binToDec(int num){
    int ans = 0, digit = 1, remd;
    while(num != 0){
        remd = num % 10;
        ans = ans + remd * digit;
        digit = digit * 2;
        num = num / 10;
    }
    return ans;
}

int main(){

    // cout<< decToBin(42) <<endl;
    // cout<< decToBin(50) <<endl;

    cout<<binToDec(101010)<<endl;
    cout<<binToDec(111010)<<endl;

 
 
    return 0;
}