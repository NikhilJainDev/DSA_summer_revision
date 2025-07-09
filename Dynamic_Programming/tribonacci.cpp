#include<iostream>
#include<vector>
using namespace std;


    int Tribonacci(int n){
        // Base case - The case that is already known to us called base case 
        if(n == 0 || n== 1){
            return n;
        }
        if(n == 2){
            return 1;
        }
        // Self work 
        else{
            return Tribonacci(n-1) + Tribonacci(n-2) + Tribonacci(n-3); 
        }
    }

int main(){

   cout<<  Tribonacci(8) << endl;
   
    return 0;
}