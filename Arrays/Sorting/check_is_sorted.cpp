#include<iostream>
#include<vector>
using namespace std;

bool checkIsSorted(vector<int> arr){
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i+1] < arr[i]){
            return false;
        }
    }
    return true;
}

int main(){

    vector<int> arr = {1,3,2};
    // Applying condition 
    if( ! checkIsSorted(arr)){
        cout<<" Not in Sorted Order "<<endl;
    }
    else{
        cout<<" In sorted Manner "<<endl;
    }
    
    return 0;
}