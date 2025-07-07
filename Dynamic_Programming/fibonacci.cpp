#include<iostream>
#include<vector>
using namespace std;

// Fibonacci using Recursion  - Time Complexity O(2^n)
int Fibonacci(int n){
    if(n == 0 || n==1){
        return n;
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

// Fibonacci using Dynamic Programming 


int Fib_DP(int n, vector<int> &dp){
    // Base case 
    if(n == 0 || n == 1){
        return n;
    }
    // Already calculated case 
    if(dp[n] != -1){
        return dp[n];
    }
    // if we have to calculated 
    else{
        dp[n] = Fib_DP(n-1, dp) + Fib_DP(n-2, dp);
        return dp[n];
    }
}


int main(){
    int n = 8;
//    cout<< Fibonacci(8) <<endl;
  vector<int> dp(n+1, -1);
  cout<<" The fibonacci value of "<<n<<" is : "<<Fib_DP(n, dp)<<endl;

   
    return 0;
}