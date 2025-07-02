#include<iostream>
#include<cmath>
using namespace std;

int reverseInteger(int number){
    int remd, ans = 0;
    while(number != 0){
        remd = number % 10;
        ans = ans * 10 + remd;
        number = number / 10;
    }
    return ans;
}

// count number of digits in a integer 
int No_ofDigits(int num){
    int remd, count = 0;
    while(num != 0){
        remd = num % 10;
        count = count + 1;
        num = num / 10;
    }
    return count;
}

int sumDigits(int number){
    int sum = 0, remd;
    if(number < 0){
        return -1;
    }
    while(number != 0){
        remd = number % 10;
        sum += remd;
        number = number / 10;
    }
    return sum;
}

int main(){
    cout<<reverseInteger(1234)<<endl;
    cout<<reverseInteger(896542)<<endl;

    cout<<No_ofDigits(4589632)<<endl;
    cout<<No_ofDigits(4123)<<endl;

    cout<<" Sum of Number is : "<<sumDigits(15698)<<endl;
    cout<<" Sum of Number is : "<<sumDigits(4536)<<endl;
    cout<<" Sum of Number is : "<<sumDigits(-26)<<endl;

    return 0;

}