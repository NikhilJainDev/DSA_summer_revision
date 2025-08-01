#include<iostream>
using namespace std;

int factorial(int number){
    if(number == 0){
        return 1;
    }
    else{
        return number * factorial(number-1);
    }
}
// Sum of N numbers 
int sum_N_Numbers(int n){
    if(n == 1){
        return n;
    }
    else{
        return n + sum_N_Numbers(n-1);
    }
}

// Recursive Fibonacci 
int fib(int num){
    if(num  == 0 || num == 1){
        return num;
    }
    else{
        return fib(num - 1) + fib(num - 2);
    }
}
int main(){
    cout<< factorial(5);
    cout<<endl;
    cout<< sum_N_Numbers(10); cout<<endl;
    cout<<sum_N_Numbers(20);
    cout<<endl;
    cout<<fib(7);
return 0;
}