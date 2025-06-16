#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
// Recursive Functions 

 void ArrayRecursive(int *arr, int idx, int n){
    // base case 
    if(idx == n){
        return;
    }
    cout<<arr[idx]<<"\n";
    ArrayRecursive(arr, idx+1, n);

}

int main(){
    int arr[6] = {7,19,63,25,84,71};
    ArrayRecursive(arr, 0, 6);
return 0;
}