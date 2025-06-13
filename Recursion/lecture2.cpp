#include<iostream>
using namespace std;

int tribonacci(int n){
    if(n == 0 || n== 1){
        return n;
    }
    else if(n == 2){
        return 1;
    }
    else{
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
}
int main()
{

    cout<< tribonacci(7);

return 0;
}