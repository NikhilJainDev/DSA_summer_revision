#include<iostream>
using namespace std;
// Ques 1) Check that the number is in palindrome or not 

int ReverseDigit(int number){
    int reminder , ans = 0;
    while(number){
        reminder = number % 10;
        ans = ans * 10 + reminder;
        number = number / 10;
    }

    return ans;
}

double CountDigit(int number){
    int reminder , ans = 0, count = 0;
    while(number){
        reminder = number % 10;
        ans = ans * 10 + reminder;
        number = number / 10;
        count = count + 1;
    }

    return count;
}

bool isPalindrome(int digit){
    int remd, ans = 0, temp;
    temp = digit; // store digit in temp variable 

    while(digit != 0){
        remd = digit % 10;
        ans = ans * 10 + remd;
        digit = digit / 10;
   }
   if(temp == ans){
    return true;
   }

return false;
}

int SumofDigits(int num){
    int remd, sum = 0;
    while(num != 0){
        remd = num % 10;
        sum = sum + remd;
        num = num / 10;
    }
    return sum;
}

int main(){

    // cout<<ReverseDigit(1234);
    // cout<<endl;
    // cout<<CountDigit(88795);

    // cout<<isPalindrome(1234);
    // cout<<isPalindrome(1331);

    cout<<SumofDigits(1234);

    

    return 0;
}