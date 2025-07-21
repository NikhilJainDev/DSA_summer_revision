#include<iostream>
#include<vector>
using namespace std;

// Merge Sorted Arrays 

vector<int> mergeArray(vector<int> arr1, vector<int> arr2, int m, int n){
    int idx = m+n-1;
    int i = m-1;
    int j = n-1;
    while(i>=0 && j>=0){
        if(arr1[i] >= arr2[j]){
            arr1[idx] = arr1[i];
            idx = idx - 1;
            i = i - 1;
        }
        else{
            arr1[idx] = arr2[j];
            idx = idx - 1;
            j = j - 1;
        }
    }

    // for Remaining elements of B  which has to be transfer in A 
    while(j >= 0){
        arr1[idx] = arr2[j];
        idx = idx - 1;
        j = j - 1;
    }

    for(int el : arr1){
        cout<<el<<" ";
    }
}

int main(){
    vector<int> A = {1,2,3,0,0,0};
    vector<int> B = {2,5,6};

    mergeArray(A, B, 3, 3);

    return 0;
}