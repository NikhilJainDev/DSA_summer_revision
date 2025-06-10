#include<iostream>
#include<vector>
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

// check that is prime or not 
bool isPrime(int digits){

    if(digits < 2){
        return false;
    }
    for(int i=2; i<digits; i++){
        if(digits % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    cout<<ReverseDigit(1234); cout<<endl;
    cout<<CountDigit(88795);

    cout<<isPalindrome(1234); cout<<endl;
    cout<<isPalindrome(1331);

    cout<<SumofDigits(1234); cout<<endl;
    cout<<SumofDigits(55647);

    cout<<endl;

    cout<<isPrime(23);
    cout<<isPrime(28);
    
cout<<" ---------------------- "<<endl;
cout<<endl;
    // TYpes of Loops 
     // For Each Loop 
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    for(int el : arr){
        cout<<el<<endl;
    }
cout<<endl;
    for(int i=2; i<=5; i++){
        cout<<i<<" ";
    }
cout<<endl;
    // Use of Break and Continue Statements 

    for(int x = 1; x<=15; x++){
        if(x == 9){
            break;
        }
        cout<<x<<endl;
    }
    cout<<endl;
    // continue Statement 

    for(int p = 11; p<=26; p++){
        if(p % 2 != 0){ // odd number only 
            cout<<p<<" ";
        }
    }

    return 0;
}