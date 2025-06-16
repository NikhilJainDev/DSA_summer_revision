#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr, int size){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    vector<int> arr = {3,7,2,2,4,7,3};
    cout<< findUnique(arr, arr.size());
    return 0;
}