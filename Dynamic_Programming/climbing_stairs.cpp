#include<iostream>
#include<vector>
using namespace std;

// Recursive code of Climbing stairs problem - Leetcode 70 

int count_Ways(int i, int n){ 
    // i = no. of ways  , n = no of floor 
    if( i == n){ // we reach to the destination 
        return 1;
    }
    if( i > n){
        return 0;
    }
    else{
        return count_Ways(i+1, n) + count_Ways(i+2, n);
    }
}
